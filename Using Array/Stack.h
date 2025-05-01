#pragma once
#include <iostream>
using namespace std;
class Stack
{
	int topIndex;
	int arr[1000];

public:
	Stack()
	{
		topIndex = -1;
	}

	void push(int x)
	{
		if (topIndex == 1000) {
			cout << "Stack overflow!" << endl;
			return;
		}
		topIndex++;
		arr[topIndex] = x;
	}

	int pop()
	{
		if (topIndex == -1) {
			cout << "Stack Underflow!" << endl;
			return -1;
		}
		int temp = arr[topIndex];
		topIndex--;
		return temp;
	}

	int top()
	{
		if (topIndex != -1) return arr[topIndex];
	}

	int size()
	{
		return topIndex + 1;
	}



};

