#pragma once

#include "Stack.h"
#include "Node.h"
#include <iostream>
using namespace std;
class Stack
{
	Node* topi;
	int size;

public:
	Stack()
	{
		size = 0;
		topi = nullptr;
	}
	

	void push(int x)
	{
		Node* temp = new Node(x);
		temp->next = topi;
		topi = temp;
		size++;
	}

	int pop()
	{
		if (!topi) {
			cout << "Stack underflow" << endl;
		}
		Node* temp = topi;
		int valu = temp->val;
		topi = topi->next;
		delete temp;
		size--;
		return valu;
	}

	int sizeGive()
	{
		return size;
	}
	int top()
	{
		return topi->val;
	}

};

