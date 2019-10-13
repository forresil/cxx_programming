#include <any>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

struct S {
  S(const S &s) = delete; // no copy-constructor allowed for this class
  S() = default;
};
struct C {
  C(const C &c) = default; // default copy-constructor allowed for this class
  C() = default;
};

int main() {
  // Check if used objects are constructible, else throw an error at compile
  // time
  static_assert(std::is_nothrow_move_constructible<C>::value, "no-throw");
  // static_assert(std::is_nothrow_move_constructible<S>::value, "no-throw"); //
  // not constructible

  // Print out size of an std::any object
  std::cout << "Size of any: " << sizeof(std::any) << std::endl;
  // Create a vector with different types of elements on it
  // Notice that only constructible objects are allow
  std::vector<std::any> v{5, 3.5, std::string("Hello World"), C() /*, S()*/};
  // Get size of vector
  std::cout << "Size of the vector v: " << v.size() << std::endl;
  // Get type of element in vector
  std::cout << "Type of element nr.1: " << v[1].type().name() << std::endl;
  // Print value of element
  std::cout << "First element (int): " << std::any_cast<int>(v[0]) << std::endl;
  std::any a = 5;
  // using any_cast
  int *i = std::any_cast<int>(&v[0]);
  *i = 20;
  std::cout << "First element (int): " << std::any_cast<int>(v[0]) << std::endl;
}
