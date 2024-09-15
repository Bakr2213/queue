#pragma once
#include "Node.h"
class Queue
{
public:
	Node* front;
	Node* rear;
	Queue();
	bool isempty();
	void Enqueue(int item);
	void display();
	int Dequeue();
	int Getfront();
	int Getrear();
	int count();
	bool isFound(int item);
	void clear();
};

