#include <iostream>
#include "Queue.h"
#include "Node.h"

using namespace std;

int main()
{
	Queue q;
	int item;
	for (int i = 1; i <= 3; i++)
	{
		cout << "Entere item to enqueue : \n";
		cin >> item;
		q.Enqueue(item);
	}
	q.display();

	q.Dequeue();
	cout << "after dequeue \n ";
	q.display();

	q.Getfront();

	cout << "clear all item\n";
	q.clear();
	cout << "Display after clear\n";
	q.display();

	cout << "enter item to search for \n";
	cin >> item;
	if (q.isFound(item))
		cout << "item is found \n";
	else
		cout << "item not found \n";

	cout << "the stack have : " << q.count() << " item \n";
}

