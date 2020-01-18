//============================================================================
// Name        : Static.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test
{
public:
	static int const MAX = 99;  // Initialization of const must be done here!
private:
	int id;
	static int count;

public:
	Test(){
		id = ++count;
	}
	// only static methods can access static data
	static void showInfo(){
		cout << count << endl;
	}

	int getId(){
		return id;
	}
};

// .cpp file
int Test::count = 0;  // static non-constant variables must be ininitialized in cpp file!


// Define and output a non-static field.
// Define and output a public static constant.
// Output a static field with a static method.
// Try incrementing static int field with postfix and prefix increment operators (e.g. count++ and ++count)
// Tryp assigning object ID based on static count incremented in constructor
int main()
{
	cout << "Static" << endl; // prints Title

	Test::showInfo();
	//cout << Test::count << endl; // won't work if count is private!
	cout << Test::MAX << endl;

	Test test1;
	Test::showInfo();
	cout << "Object1 ID: " << test1.getId() << endl;
	Test test2;
	Test::showInfo();
	cout << "Object2 ID: " << test2.getId() << endl;


	return 0;
}
