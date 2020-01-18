//============================================================================
// Name        : functions.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu()
{
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput()
{
	cout << "Enter selection: " << flush;
	int input;
	cin >> input;
	return input;
}

void prochessSelection(int selection)
{
	switch (selection)
	{
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select one item from the menu." << endl;
		break;
	}
}

void showTitleLine()
{
	cout << "Program: Functions\n----------------------" << endl;
}

int main()
{
	showTitleLine();
	showMenu();
	int selection = getInput();
	prochessSelection(selection);

	return 0;
}
