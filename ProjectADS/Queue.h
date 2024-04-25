#pragma once
#include <string>
class Queue
{
private:
	int* queue;
	int size;
public:
	void enqueue(int element);
	int dequeue();
	int peek();
	int getSize();
	bool isEmpty();
};
