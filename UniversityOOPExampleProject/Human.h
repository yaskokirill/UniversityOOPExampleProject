#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;

public:
	int id;

	Human() {
		//cout << "default constructor of Human" << endl;
	}

	Human(string name, int age) :
		name(name), age(age) {}

	~Human() {
		//cout << "destructor of Human" << endl;
	}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);

	string getInfo();
};
