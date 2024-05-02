#pragma once
#include "Human.h"

class Student : public Human {
private:
	double mark;

public:
	Student() {} // : Student("no name", 5, 4) {}

	/*Student(string name, int age, double mark)
		: name(name), age(age), mark(mark) {}*/

		/*Student(string name) : Student(name, 0, 0) {}
		Student(double mark) : Student("no name", 0, mark) {}*/

	~Student() {}

	double getMark();
	void setMark(double m);

	string getInfo();

};