//============================================================================
// Name        : 30_TemplateClasses.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T, class K>
class Test{
private:
	T obj;
public:
	Test(T obj){
		this->obj = obj;
	}

	void print(){
		cout << obj << endl;
	}

};
int main() {
	cout << "Template Classes/n" << endl; // prints Title/n

	Test<string, int> test1("Hello");
	test1.print();

	return 0;
}
