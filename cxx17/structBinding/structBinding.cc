#include <map>
#include <string>
#include <utility>

//--------------------------------------------------------------------------
// C++03
//--------------------------------------------------------------------------

int &add_local_03(std::map<std::string, int> vars,
               const std::string &new_var_name) {
  std::pair<std::map<std::string, int>::iterator, bool> new_var =
      vars.insert(std::make_pair(new_var_name, 0));

  if (new_var.second == false) {
    throw std::runtime_error("variable already exists");
  } else {
    return new_var.first->second;
  }
}

//--------------------------------------------------------------------------
// C++17
//--------------------------------------------------------------------------

int &add_local_17(std::map<std::string, int> vars,
                  const std::string &new_var_name) {
  if (auto [itr, success] = vars.insert(std::make_pair(new_var_name, 0));
      success == false) {
    throw std::runtime_error("variable already exists");
  } else {
    auto [key, value] = *itr;
    return value;
    // return itr->second;
  }
}

struct S {
  int i{4};
  int j{5};
};

//--------------------------------------------------------------------------
// MAIN 
//--------------------------------------------------------------------------

int main() {
  std::map<std::string, int> locals;

  int &i = add_local_03(locals, "my_var");
  i = 5;
  int &i17 = add_local_17(locals, "my_var2");
  i17 = 10;

  auto [iS, j] = S();
  return i + i17 + iS;
}
