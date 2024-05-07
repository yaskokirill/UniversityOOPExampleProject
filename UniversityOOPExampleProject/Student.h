#pragma once
#include "Human.h"

class Student : public Human {
private:
	double mark;

public:
	Student() : Human("no name", 5), mark(4) {}

	Student(string name, int age, double mark)
		: Human(name, age), mark(mark) {}

	Student(string name) : Human(" no name", 0), mark(0) {}
	Student(double mark) : Student("no name", 0, mark) {}

	~Student() {}

	double getMark();
	void setMark(double m);

	string getInfo();

};