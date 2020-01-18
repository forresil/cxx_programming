//============================================================================
// Name        : CustomExceptions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * @brief Custom Exception class
 * @class MyException
 * @details This class inherits from the C++ "exception" class
 */
class MyException: public exception
{
public:
	/**
	 * @brief Overrides the "what()" method of C++ class "exception"
	 * @details const throw() denotes that this doesn't returns any kind of exception!
	 * @return "char const *" telling what went wrong
	 */
	virtual const char* what() const throw ()
	{ //const throw list the exceptions thrown by this function
		return "Something bad happened!";
	}
};

class Test
{
public:
	/**
	 * @brief shows usage of "throw" on declaration body
	 * @warning throw(Exception) on declaration body should actually don't be used
	 * since it could block the program if not anyone of the by the method thrown exceptions are
	 * listed here!
	 * @throw MyException object
	 */
	void goesWrong() throw (MyException)
	{
		throw MyException();
	}

	/**
	 * @brief shows usage of "throw" without a declaration on method body
	 * @throw MyException object
	 */
	void somethingElseWentWrong()
	{
		throw MyException();
	}
};
int main()
{
	cout << "Custom Exceptions\n" << endl; // prints Title\n

	Test test;

	try
	{
		test.goesWrong();

	} catch (MyException &e)
	{
		cout << e.what() << endl;
	}

	try {
		test.somethingElseWentWrong();
	} catch (MyException &e) {
		cout << "Something else went wrong: ";
		cout << e.what() << endl;
	}

	cout << "Still running!" << endl;

	return 0;
}
