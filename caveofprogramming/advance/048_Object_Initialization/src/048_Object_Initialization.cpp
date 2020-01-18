//============================================================================
// Name        : 048_Object_Initialization.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// In this class the variables are initialized without the need of constructor
class Test0{
	// variables are per default private!
	int id{3};
	string name{"Test0"};
public:
	void print(){
		cout << id << ": " << name << endl;
	}
};

class Test1{
	int id{1};
	string name{"Test1"};

public:

	// New default constructor
	/*
	 * In theory, if you provide a parameterized constructor you will lose
	 * the implicit constructor provided by the C++11 compiler,
	 * so you will need to provide a new implicit constructor.
	 */
	Test1() = default; // new implicit constructor (don't needed since C++14)!!

	// Dedicated parameterized constructor
	/*
	 *  here only the id parameter is initialized by the constructor, while the
	 *  name parameter is initialized automatically by the compiler using the
	 *  default constructor activated by the declaration of the class variables.
	 */
	Test1(int id): id(id){

	}

	// Please, use the default Copy Constructor
	/*
	 * Here we explicit say that we want to use a default copy constructor
	 * implementation. It means, the implementation provided by the compiler.
	 * A default copy constructor will be created for us by the compiler.
	 */
	Test1(const Test1 &other) = default;

	// Please, use the default function for the =Operator
	Test1 &operator=(const Test1 &other) = default;

	void print(){
		cout << id << ": " << name << endl;
	}

};

class Test2{
	int id{3};
	string name{"Test2"};

public:
	Test2() = default;

	// Copy constructor
	/*
	 * Make it impossible to use the Copy Constructor of this class!
	 */
	Test2(const Test2 &other) = delete;

	//Make it impossible to copy this object!
	Test2 &operator=(const Test2 &other) = delete;

	Test2(int id): id(id){

	}
	void print(){
		cout << id << ": " << name << endl;
	}
};



int main() {
	cout << "Object Initialization\n" << endl; // prints Title\n

	Test0 test0;
	test0.print();

	Test1 test1(77);
	test1.print();

	Test1 test11 = test1; // Please, use the default Copy Constructor
	test11 = test1; // Please, use the default =Operator function

	// Here a Class that can't be copied
	Test2 test21;
//	Test2 test22 = test21; // here we'cant use the Copy Constructor
//	test22 = test21;  // here we'cant use the copy function of =Operator



	return 0;
}
