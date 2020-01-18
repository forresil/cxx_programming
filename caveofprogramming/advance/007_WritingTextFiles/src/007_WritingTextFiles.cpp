//============================================================================
// Name        : 007_WritingTextFiles.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	cout << "Writing Text Files\n" << endl; // prints Title\n

	// OUTPUT FILE STREAM
	ofstream outFile;

	string outputFileName = "text.txt";
	outFile.open(outputFileName);

	if (outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else{
		cout << "Could not create file: " << outputFileName << endl;
	}


	// FILE STREAM
	fstream outFile2;

		string outputFileName2 = "textFstream.txt";
		outFile2.open(outputFileName2, ios::out);

		if (outFile2.is_open()) {
			outFile2 << "Text from fstream" << endl;
			outFile2 << 123 << endl;
			outFile2.close();
		}
		else{
			cout << "Could not create file: " << outputFileName2 << endl;
		}


	return 0;
}
