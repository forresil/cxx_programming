#include <functional>
#include <iostream>

int do_something(const int i) { return 5 + i; }
struct S {
  int j = 5;
  int do_something(const int i) { return j + i; }
  int do_something2(const int i) { return j * i; }
};
int main() {
  // invoke some function using std::invoke
  std::cout << std::invoke(&do_something, 5) << std::endl;

  // The traditional way of invoking methods...
  //--------------------------------------------------------------------------------
  S s;
  std::cout << s.do_something(3) << '\n';

  auto fp = &S::do_something;
  std::cout << (s.*fp)(2) << '\n';

  int (S::*fp2)(int) = &S::do_something;
  std::cout << (s.*fp2)(1) << '\n';

  int (S::*fp3)(int) = nullptr;
  if (true) {
    fp3 = &S::do_something2;
  } else {
    fp3 = &S::do_something;
  }
  std::cout << (s.*fp3)(1) << '\n';
  //--------------------------------------------------------------------------------

  // Invoking methods using std::invoke
  std::cout << std::invoke(&S::do_something, s, 10)
            << '\n'; // uses 1th method of object s
  std::cout << std::invoke(&S::do_something2, s, 10)
            << '\n'; // uses 2th method of object s
  std::cout << std::invoke(&S::j, s)
            << '\n'; // access member variable j of object s
}
