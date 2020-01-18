//============================================================================
// Name        : 069_SharedPointers.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

class Test{
private:
	int id{};
public:
	Test():id(0){
		cout << id <<" created" << endl;
	}
	Test(int nid){
		id = nid;
		cout << id <<" created" << endl;
	}
	void greet(){
		cout << "Hello" << endl;
	}
	~Test(){
		cout << id << " destroyed" << endl;
	}
};

int main() {
	cout << "Shared Pointers\n" << endl; // prints Title\n

	shared_ptr<Test> pTest3(nullptr);

	{
		cout << "Shared poninter with new" << endl;
	shared_ptr<Test> pTest1(new Test(1));
	}

	// Best way to create shared Pointers is with the make_shared macro
	{
		cout << "\nShared Pointer with make_shared" << endl;
	shared_ptr<Test> pTest2 = make_shared<Test>(2); // is more efficient!
	}

	// Usage of Shared Pointers
	{
		cout << "\nShared Pointers used" << endl;
	shared_ptr<Test> pTest4 = make_shared<Test>(4); // is more efficient!
	pTest3 = pTest4;
	auto pTest5 = pTest4;
	}

	cout << "\nFinished" << endl;

	return 0;
}
