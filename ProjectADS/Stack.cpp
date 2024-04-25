#include "Stack.h"

int Stack::getSize() {
	return size;
}

bool Stack::isEmpty() {
	return size == 0;
}

void Stack::push(int element) {
	if (isEmpty()) {
		stack = new int[1];
		stack[0] = element;
	}
	else {
		int* temp = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = stack[i];
		}

		temp[size] = element;
		delete[] stack;
		stack = temp;
	}
	size++;
}

int Stack::pop() {
	if (!isEmpty()) {
		int* temp = new int[size - 1];
		int element = stack[size - 1];
		size--;

		for (int i = 0; i < size; i++)
		{
			temp[i] = stack[i];
		}

		delete[] stack;
		stack = temp;

		return element;
	}

	return 0;
}

int Stack::peek() {
	if (!isEmpty()) {
		return stack[size - 1];
	}

	return 0;
}

string Stack::getInfo() {
	string s = "Stack: ";

	for (int i = size - 1; i >= 0; i--)
	{
		s += to_string(stack[i]) + " ";
	}

	return s;
}