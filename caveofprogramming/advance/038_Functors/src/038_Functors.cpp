//============================================================================
// Name        : 038_Functors.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// Create a Functor by defining the ()-operator for a class/struct
struct Test {
	virtual bool operator()(string &text)=0; // virtual keyword makes it overloadable
	virtual ~Test() {
	}
};

/**
 * @note deriving MatchTest from Test, we can create many Test-Cases which can be
 * passed transparently to the check() function!
 */
struct MatchTest: public Test {
	/// Overloading the () operator
	/// overloads the empty() and the many variables() variant of the () operator!
	virtual bool operator()(string &text) {
		return text == "lion";
	}
	virtual ~MatchTest() {
	}
};

/**
 * @brief This function works like the "match" command in Rust!
 * @note We can define many different "MatchTests" and pass them transparently
 * to this function, since they are childs of the parent class "Test".
 * @param text - Some string that has to be checked
 * @param test - The "MatchTest" that we are applying for this check.
 * @example MatchTest m; check("lino", m);
 */
void check(string text, Test &test) {
	if (test(text)) {
		cout << "Text matches!" << endl;
	} else {
		cout << "No match." << endl;
	}
}

int main() {
	cout << "Functors/n" << endl; // prints Title/n

	MatchTest pred;

	string value = "lion";

	cout << pred(value) << endl;  // use the overloaded () operator of the struct!

	MatchTest m;
	check("lino", m);

	return 0;
}
