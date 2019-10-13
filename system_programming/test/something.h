#include <iostream>
#ifndef SOMETHING_H
#define SOMETHING_H

/** @brief Class something is used here a an example */
class Something {
private:
  int myNumber;
  char myChar;

public:
  Something() : myNumber(1), myChar('a') {
    std::cout << "something created with id: " << myNumber << std::endl;
  }
  unsigned int get_myNumber() { return myNumber; }
  ~Something() { std::cout << "something destroyed" << std::endl; }
  char get_myChar() const { return myChar; }
};

#endif /*SOMETHING_H*/
