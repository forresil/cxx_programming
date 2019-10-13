#include <cstring>
#include <sys/wait.h>
#include <unistd.h>

#include <array>
#include <iostream>
#include <string_view>

class mypipe {
private:
  std::array<int, 2> m_handles;

public:
  mypipe() {
    if (pipe(m_handles.data()) < 0) {
      exit(1);
    }
  }

  ~mypipe() {
    close(m_handles.at(0));
    close(m_handles.at(1));
  }

  std::string read() {
    std::array<char, 256> buf;
    std::size_t bytes = ::read(m_handles.at(0), buf.data(), buf.size());
    if (bytes > 0) {
      return {buf.data(), bytes};
    };
    return {};
  }

  void redirect();
};

void mypipe::redirect() {
  dup2(m_handles.at(1), STDOUT_FILENO);
  close(m_handles.at(0));
  close(m_handles.at(1));
}

int main(void) {
  std::cout << "pipeout\n----------" << std::endl;

  mypipe p;

  if (fork() == 0) {
    p.redirect();
    execlp("ls", "ls", nullptr);
  } else {
    wait(nullptr);
    std::cout << p.read() << '\n';
  }
}
