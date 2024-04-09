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
	Student();
	Student(string nm, int a, double m);
	Student(string nm);
	Student(double m);

	~Student();

	string getName();
	void setName(string nm);

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(double m);

	string convert();

};