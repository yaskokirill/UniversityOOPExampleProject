#include "Manager.h"
#include <iostream>

int main() {
	Group groupA;

	Student st1{ "Alex", 16, 9};
	Student st2{ "Peter", 15, 8 };
	Student st3{ "Alice", 14, 7 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	cout << groupA.getInfo() << endl;

	return 0;
}