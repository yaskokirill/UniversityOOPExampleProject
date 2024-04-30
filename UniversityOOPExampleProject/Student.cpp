#include "Student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}


Student::Student() : Student("no_name", 6, 4) {

}

Student::Student(string name) : name(name), age(6), mark(4) {
	count++;
}

Student::Student(string name, int age, double mark)
	: name(name), age(age), mark(mark) {
	count++;
}

Student::~Student() {
	count--;
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
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