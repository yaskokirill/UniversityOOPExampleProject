#include "Student.h"

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark > 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::getInfo() {
	string s = "";
	s += getName();
	s += ": age = " + to_string(getAge());
	s += ", mark = " + to_string(mark);
	return s;
}