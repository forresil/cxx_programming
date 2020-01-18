//============================================================================
// Name        : 068_Unique_Pointers.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>  // needed for unique and shared pointers.

using namespace std;


class Test{
public:
	Test(){
		cout << "created" << endl;
	}
	void greet(){
		cout << "Hello" << endl;
	}
	~Test(){
		cout << "destroyed" << endl;
	}
};


class Temp{
private:
	unique_ptr<Test[]> pTest;
public:
	Temp(): pTest(new Test[2]){

	}
	// we no longer need to have a destructor in this class!!!!!!!!!
};

int main() {
	cout << "Unique pointers\n" << endl; // prints Title\n

	// Unique Pointers are smart pointers which deallocate memory for u.
	unique_ptr<int> pTest(new int); // Memory allocation is controlled by pTest constructor.
	*pTest = 7;
	cout << *pTest << endl;

	cout << "Unique Pointer" << endl;
	// Unique Pointers are smart pointers which deallocate memory for u.
	{
	unique_ptr<Test> pTest1(new Test); // Memory allocation is controlled by pTest constructor.
	pTest1->greet();
	}
	cout << "\n Unique Pointer on Array" << endl;
	// Unique Pointers on arrays are smart pointers which deallocate memory for u.
	{
	unique_ptr<Test[]> pTest2(new Test[2]); // Memory allocation is controlled by pTest constructor.
	pTest2[1].greet();
	}

	cout << "\nTemp Object with unique_ptr" << endl;
	{
	Temp temp;  // Destructors are called automatically !!!!
	}

	cout << "\n Auto Pointer -- Deprecated" << endl;
	// Unique Pointers are smart pointers which deallocate memory for u.
	{  /*DEPRECATED* -> Can't be used with arrays!! */
	auto_ptr<Test> pTest1(new Test); // Memory allocation is controlled by pTest constructor.
	pTest1->greet();
	}

	cout << "Finished"<< endl;

	return 0;
}
