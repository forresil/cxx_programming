//============================================================================
// Name        : StructsPadding_BinaryFiles.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

/**
 * This pragma pack directive sets the boundaries for packages to 1 byte
 */
#pragma pack(push, 1)
/// always use packaged structs when writing files!
struct Person
{
	//string name; // don't use string class, since it contains pointers!!!
	char name[50];
	int age;
	double height;

};
#pragma pack(pop)  //end of the package directive
/**
 * This program creates a binary file which contains a struct of type Person,
 * puts some data into it and if the creation is successful reads the content
 * of the file again into an other struct of same type and prints the content
 * to the standard output.
 * @return 0 if successful or 1 if there is an error!
 */
int main()
{
	cout << "Structs and Padding\n" << endl; // prints Title\n

	cout << "Sizeof Person: " << sizeof(Person) << endl;

	Person someone =
	{ "Frodo", 220, 0.8 };

	string filename = "test.bin";

	//// Write Binary File ////////////
	ofstream outputfile;
	outputfile.open(filename, ios::binary);
	if (outputfile.is_open())
	{
		outputfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputfile.close();
	}
	else
	{
		cout << "Coud not create file " + filename;
	}

	//// Read binary file ///////////

	Person someoneElse =
	{ };
	ifstream inputfile;
	inputfile.open(filename, ios::binary);
	if (inputfile.is_open())
	{
		// using reinterpret_cast<> is better than just cast the type using (char *)!
		inputfile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputfile.close();
	}
	else
	{
		cout << "Coud not read file " + filename;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", "
			<< someoneElse.height << endl;

	return 0;
}
