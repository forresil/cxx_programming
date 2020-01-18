//============================================================================
// Name        : ConstructorInheritance.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine{
private:
	int id;
public:
	Machine(): id(0){cout << "Machine no-argument constructor called." << endl;}
	Machine(int id): id(id){cout << "Machine parametrized constructor called." << endl;}
	void info(){ cout << "ID: " << id << endl;}
};

class Vehicle: public Machine{
public:
	Vehicle(){cout << "Vehicle no-argument constructor called." << endl;}
	Vehicle(int id):Machine(id){cout << "Vehicle parametrized constructor called." << endl;}
};

class Car:public Vehicle{
public:
	Car():Vehicle(999){cout << "Car no-argument constructor called." << endl; }
};

int main() {
	cout << "Inheritance and Construction" << endl; // prints Title

	Vehicle vehicle(222);
	vehicle.info();

	Car car;
	car.info();

	return 0;
}
