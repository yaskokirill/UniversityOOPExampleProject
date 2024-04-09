#include "Student.h"

Student::Student() {
	name = "no name";
	age = 5;
	mark = 4;
}


Student::Student(string nm, int a, double m) {
	name = nm;
	age = a;
	mark = m;
}

// constructor with parameters (arguments)
Student::Student(string nm) {
	//cout << "calling constructor with parameters 1" << endl;
	name = nm;
	age = 0;
	mark = 0;
}

// constructor with parameters (arguments)
Student::Student(double m) {
	//cout << "calling constructor with parameters 2" << endl;
	name = "no name";
	age = 0;
	mark = m;
}

Student::~Student() {
	//cout << "calling destructor" << endl;
	//delete[] mark;
}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	name = nm;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 90) {
		age = a;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double m) {
	if (m > 0 && m <= 10) {
		mark = m;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);
	return s;
}