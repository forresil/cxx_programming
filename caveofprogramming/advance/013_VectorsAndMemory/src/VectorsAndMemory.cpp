//============================================================================
// Name        : VectorsAndMemory.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Vectors and Memory\n" << endl; // prints Title\n

	// try to guess the number of elements you are using to avoid waiting for vector resizing!
	vector<double> numbers(20);

	// size is the actual number of elements that you added to this vector
	cout << "Size: " << numbers.size() << endl;

	// capacity is the total number of elements that you can add before a new array is created
	unsigned int capacity = numbers.capacity();
	cout << "Capacitiy: " << capacity << endl;

	for (int i = 0; i < 1000; ++i)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	// Resize vector
	cout << "\nResize Vector to 100" << endl;
	numbers.resize(100);
	cout << "numbers[22]: " << numbers[22] << endl; // any content will keep unchanged
	cout << "Size: " << numbers.size() << endl; // size() returns the new value
	cout << "Capacitiy: " << numbers.capacity() << endl; // capacity remains unchanged

	cout << "\nReserve Vector capacity of 10'000" << endl;
	numbers.reserve(10000);
	cout << "numbers[33]: " << numbers[33] << endl; // any content will keep unchanged
	cout << "Size: " << numbers.size() << endl; // size() remains unchanged
	cout << "Capacitiy: " << numbers.capacity() << endl; // capacity change to the new value if it is bigger as the old one

	// Remove all elements of a vector
	cout << "\nRemove all elements of vector" << endl;
	numbers.clear();
	cout << "numbers[22]: " << numbers[22] << endl; // any content will keep unchanged
	cout << "numbers[33]: " << numbers[33] << endl; // any content will keep unchanged
	cout << "actual Size: " << numbers.size() << endl; // size will be reseated to zero!
	cout << "actual Capacitiy: " << numbers.capacity() << endl; // capacity doesn't change!

	return 0;
}
