#include <iostream>
#include "Stack.h"

int main() {
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	while (!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}

}