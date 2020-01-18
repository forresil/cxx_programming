//============================================================================
// Name        : ParsingTextInFiles.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

/**
 * This program reads the content of the "stat.txt" file in the project dir.
 * @return
 */
int main()
{
	cout << "Parsing Text in Files\n" << endl; // prints Title\n

	string filename = "stat.txt";
	ifstream input;

	//open input file stream
	input.open(filename);
	if (!input.is_open())
	{
		return 1;
	}
		//read file content & print it out
		while (input)
		{
			// get line content up to symbol ':' as string
			string line;
			getline(input, line, ':');

			// get population as integer
			int population;
			input >> population;

			// discard CR at end of line
			//input.get();
			input >> ws;  //C++11 reads white spaces

			// stop if if there is an error in input
			if (!input)
			{
				break;
			}

			// print line content to standard out. Uses ' to see invisible characters
			cout << "'" << line << "'"<<" -- '" << population << "'" <<  endl;
		}

	//close input file stream
	input.close();

	return 0;
}
