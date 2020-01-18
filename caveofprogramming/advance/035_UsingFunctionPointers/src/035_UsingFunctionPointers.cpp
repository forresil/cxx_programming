//============================================================================
// Name        : 035_UsingFunctionPointers.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm> // needed for count_if
#include <vector>

using namespace std;

// checks if a word matches a criteria
bool match(string test){
	return test.size()==3;
}


// my own version of count_if algorithm :-)
int countStrings(vector<string> &texts, bool (*pMatch)(string test) ){
	int tally=0;
	for(unsigned int i=0; i<texts.size(); ++i){
		if(match(texts[i])){
			tally++;
		}
	}
	return tally;
}

int main() {
	cout << "Using Function Pointers/n" << endl; // prints Title/n

	vector<string> texts;

	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	//use count_if() from <algorithm> and pass match() as a function pointer!
	cout << "Words with 3 characters: "
			<< count_if(texts.begin(), texts.end(), match) << endl;

	cout << "Words with 3 characters: " << countStrings(texts, match) << endl;

	return 0;
}
