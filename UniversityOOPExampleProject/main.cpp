#include "Student.h"
#include <iostream>
using namespace std;

int main() {
	Student st1("Alex", 14, 9);
	Student st2("Alice");
	Student st3(10);
	Student st4;
	Student st5{};
	Student st6{ "Peter" };
	Student st7{"Anna", 13, 7};
	//Student st8{ "Anna", 13 }; //Compiler Error
	Student st9 = Student("Alice");

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;
	cout << st5.convert() << endl;
	cout << st6.convert() << endl;
	cout << st7.convert() << endl;
	//cout << st8.convert() << endl;
	cout << st9.convert() << endl;

	return 0;
}