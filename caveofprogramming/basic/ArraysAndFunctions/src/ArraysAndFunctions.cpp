//============================================================================
// Name        : ArraysAndFunctions.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(int nElements, string texts[])
{
	cout << "Size of texts-array in show1: " << sizeof(texts) << endl;
	for (int i = 0; i < nElements; ++i) {
			cout << texts[i] << endl;
	}
}
void show2(int nElements, string *texts)  //is the same as show1
{
	cout << "Size of texts-array in show2: " << sizeof(texts) << endl;
	for (int i = 0; i < nElements; ++i) {
			cout << texts[i] << endl;
	}
}
void show3(string (&texts)[3])  //pass an array as reference, also must pass the right size!!
{
	cout << "Size of texts-array in show3: " << sizeof(texts) << endl;
	for (int i = 0; i < sizeof(texts)/sizeof(string); ++i) {
			cout << texts[i] << endl;
	}
}

// Some used(full) constructs for C++
char *getMemory(){
	cout << "allocating some memory for you" << endl;
	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMem){
	cout << "deallocating used memory" << endl;
	delete [] pMem;
}
int main() {
	cout << "Arrays and Functions" << endl; // prints Title

	string texts[] = {"apple","orange", "banana"};
	cout << "Size of texts array in main: "<< sizeof(texts) << endl;
	show1(3, texts);
	show2(3, texts);
	show3(texts);

	char *myMem=getMemory();
	freeMemory(myMem);

	return 0;
}
