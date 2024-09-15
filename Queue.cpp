#include "Queue.h"
#include <cstddef>
#include <iostream>

using namespace std;
Queue::Queue()
{
	front = rear = NULL;
}

bool Queue::isempty()
{
	if (front == NULL && rear == NULL)
		return true;
	else
		return false;
}

void Queue::Enqueue(int item)
{
	Node* newnode = new Node();
	newnode->data = item;
	if (isempty())
		front = rear = newnode;
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
}

void Queue::display()
{
	if (isempty())
		cout << "Queue is empty\n";
	else
	{
		Node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}

int Queue::Dequeue()
{
	int delvalue = -1;
	if (isempty())
		cout << "the queue is empty \n";
	else if (front == rear)
	{
		delete front;
		front = rear = NULL;
	}
	else
	{
		Node* delptr = front;
		front = front->next;
		delvalue = delptr->data;
		delete delptr;
	}
	return delvalue;
}

int Queue::Getfront()
{
	return front->data;
}

int Queue::Getrear()
{
	return rear->data;
}

int Queue::count()
{
	int counter = 0;
	Node* temp = front;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return counter;
}

bool Queue::isFound(int item)
{
	bool found = false;
	Node* temp = front;
	while (temp != NULL)
	{
		if (temp->data == item)
			found = true;
		temp = temp->next;
	}
	return found;
}

void Queue::clear()
{
	while ( !isempty() )
	{
		Dequeue();
	}
}
