#include "something.h"
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
  Test() { cout << "Test constructed" << endl; }
  ~Test() { cout << "Test destroyed" << endl; }
};

//--------------------------------------------------------------------------------
// MAIN
//--------------------------------------------------------------------------------
int main() {
  cout << "This is a test" << endl;
  Test test;
  Something my_something;
  auto number = my_something.get_myNumber();
  auto letra = my_something.get_myChar();
  cout << "my number is: " << number << endl;
  cout << "my letra is: " << letra << endl;
  return 0;
}
