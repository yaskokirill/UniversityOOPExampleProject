#include "Student.h"

// static class components
int Student::count = 0;

int Student::getCount() {
	return count;
}

// dynamic class components

// default constructor 
Student::Student() : Student("no_name", 6, 4) {
	//cout << "default constructor was calling" << endl;
	/*name = "no name";
	age = 6;
	mark = 4;*/
}

Student::Student(string name) : name(name), age(6), mark(4) {
	//cout << "constructor with arguments was calling" << endl;
	count++;
}

//Student(string name, int age) {
//	//cout << "constructor with arguments was calling" << endl;
//	this->name = name;
//	this->age = age;
//}

// canonical constructor 
Student::Student(string name, int age, double mark)
	: name(name), age(age), mark(mark) {
	count++;
	//cout << "canonical constructor with arguments was calling" << endl;	
}

//// copy-constructor 
//Student(const Student& student) {

//}

// destructor
Student::~Student() {
	//cout << "destructor was calling" << endl;
	count--;
}

string Student::getName() {
	return name;
}

/*void setName(string nm) {
	name = nm;
}*/

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}