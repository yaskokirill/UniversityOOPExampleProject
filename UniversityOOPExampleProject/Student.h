#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;

	// default constructor
	Student() {
		//cout << "calling default constructor" << endl;
		name = "no name";
		age = 5;
		mark = 4;
	}

	// canonical constructor with parameters (arguments)
	Student(string nm, int a, double m) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		age = a;
		mark = m;
	}

	// constructor with parameters (arguments)
	Student(string nm) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		age = 0;
		mark = 0;
	}

	// constructor with parameters (arguments)
	Student(double m) {
		//cout << "calling canonical constructor" << endl;
		name = "no name";
		age = 0;
		mark = m;
	}

	~Student() {
		cout << "calling destructor" << endl;
	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);
		return s;
	}
};