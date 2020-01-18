//============================================================================
// Name        : 021_Stack_and_Queue.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test
{
private:
	string name;

public:
	Test(string name) :
			name(name)
	{

	}

	~Test()
	{
		//cout << "Object destroyed" << endl;
	}

	void print()
	{
		cout << name << endl;
	}
};

int main()
{
	cout << "Stacks and Queues\n" << endl; // prints Title\n

	//LIFO
	stack<Test> testStack;  // last in first out object! (LIFO)

	cout << "Populating testStack..." << endl;
	testStack.push(Test("Mike"));  // PUSH elements into the stack
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	cout << "Stack's top element: ";
	Test test1 = testStack.top(); //POP reads top element out from stack and copies it into new object.
	test1.print();

	testStack.pop(); // destroy top element, returns void!

	// Invalid (bad) code!!
//	Test &test2 = testStack.top(); // Returns a reference to the object in the stack!
//	testStack.pop(); // destroy the referenced element in the stack
//	test2.print(); // here test2 refers to a destroyed element that doesn't exists any more!

	cout << "...after popping last element (Sue) the stack contains only:"
			<< endl;

	//Iterate through all stack's elements
	while (testStack.size() > 0)
	{
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	//FIFO
	queue<Test> testQueue;

	cout << "\nPopulating testQueue..." << endl;
	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	//Returns Queue's "back"
	cout << "\nQueue's back element: ";
	testQueue.back().print();


	//Iterate through all Queue's elements
	cout << "\nQueue's elements:" << endl;
	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}
