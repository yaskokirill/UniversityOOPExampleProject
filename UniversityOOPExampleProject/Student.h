#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:
	Student() : Student("no name", 5, 4) {}

	Student(string name, int age, double mark)
		: name(name), age(age), mark(mark) {}

	Student(string name) : Student(name, 0, 0) {}
	Student(double mark) : Student("no name", 0, mark) {}

	~Student() {}

	string getName();
	void setName(string nm);

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(double m);

	string convert();

};