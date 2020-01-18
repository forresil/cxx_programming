//============================================================================
// Name        : Const.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:
	void setName(string name)
	{
		this->name = name;
	}
	;
	void speak() const // here const prevents Object to be changed!!
	{
		cout << "My Name is: " << name << endl;
	}
};

int main()
{

	cout << "Const\n" << endl; // prints Title

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	// POINTER to CONSTANT
	int value = 8;
	const int *pValue = &value; //CONST prevents pointer's content to be changed!
	cout << *pValue << endl;
	//*pValue = 12; //error: assignment of read-only location '* pValue'
	cout << *pValue << endl;

	// CONSTANT POINTER
	int number = 11;
	int * const pNumber = &number;  //* CONST prevents pointer to be reassigned!
	pValue = &number;
	cout << *pValue << endl;
	//pNumber = &value; //error: assignment of read-only variable 'pNumber'
	cout << *pValue << endl;

	// CONSTANT POINTER to a CONSTANT
	const double * const pConstant = &PI; // Constant pointer to constant integer
	cout << "Constant Pointer: " << *pConstant << endl;

	return 0;
}
