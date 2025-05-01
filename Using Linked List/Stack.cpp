#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack stack;

	stack.push(5);
	stack.push(10);
	cout << stack.top() << endl;
	cout << stack.sizeGive() << endl;
	stack.pop();
	cout << stack.top() << endl;
	cout << stack.sizeGive() << endl;
	stack.pop();
	stack.pop();
}