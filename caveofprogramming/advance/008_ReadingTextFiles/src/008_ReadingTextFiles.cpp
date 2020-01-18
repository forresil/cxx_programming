//============================================================================
// Name        : 008_ReadingTextFiles.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Reading Text Files with IFSTRING" << endl; // prints Title\n

	string inFileName = "test.txt";

	// USING IFSTREAM
	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open())
	{
		string line;

		while (!inFile.eof())
		{
			getline(inFile, line);  // Reads the file line by line
			cout << line << endl;
		}

		cout << "\n---------------\n" << endl;
		// Since C++ 11 you can write as follows:
		while (inFile)
		{
			getline(inFile, line);  // Reads the file line by line
			cout << line << endl;
		}

		inFile.close();

	}
	else
	{
		cout << "Cannot open file: " << inFileName << endl;
	}

	// USING FSTREAM
	cout << "\n\nReading Text Files with FSTRING" << endl; // prints Title\n
	fstream inFileStream;

	inFileStream.open(inFileName, ios::in);

	if (inFileStream.is_open())
	{
		string line;

		while (!inFileStream.eof())
		{
			getline(inFileStream, line);  // Reads the file line by line
			cout << line << endl;
		}

		cout << "\n---------------\n" << endl;
		// Since C++ 11 you can write as follows:
		while (inFileStream)
		{
			getline(inFileStream, line);  // Reads the file line by line
			cout << line << endl;
		}

		inFileStream.close();

	}
	else
	{
		cout << "Cannot open file: " << inFileName << endl;
	}
	return 0;
}
