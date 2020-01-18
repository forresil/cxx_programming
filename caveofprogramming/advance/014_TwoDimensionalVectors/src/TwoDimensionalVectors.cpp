//============================================================================
// Name        : TwoDimensionalVectors.cpp
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
	cout << "Two Dimensional Vectors\n" << endl; // prints Title\n

	// Define a grid of numbers as vector of vectors.
	//col <   row     >  grid (rows, type ( 4 cols, init value)
	vector<vector<int> > grid(3, vector<int>(4, 7));

	// Add an element to row
	grid[1].push_back(8);

	// Iterate through the vector
	for (unsigned int row = 0; row < grid.size(); ++row)
	{
		for (unsigned int col = 0; col < grid[row].size(); ++col)
		{
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	return 0;
}
