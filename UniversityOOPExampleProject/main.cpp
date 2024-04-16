#include "Manager.h"
#include <iostream>
using namespace std;

int main() {
	Student st1("Alex", 14, 9);
	Student st2("Alice", 15, 7);

	cout << st1.convert() << endl;

	Student* st2 = new Student("Peter", 16, 10);

	return 0;
}