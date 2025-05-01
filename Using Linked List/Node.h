#pragma once
class Node
{
public:

	int val;
	Node* next;

	Node()
	{
		val = -1;
		next = nullptr;
	}

	Node(int val)
	{
		this->val = val;
		next = nullptr;
	}

	Node(int val, Node* next)
	{
		this->val = val;
		this->next = next;
	}
};

