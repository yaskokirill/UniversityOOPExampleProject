#pragma once
#include "Human.h"
using namespace std;

class Student : public Human
{ 
private:
	string name;
	int age;
	double mark;

	static int count;

public:

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	Student();
	Student(string, int, double);
	Student(string);

	~Student();

	double getMark();
	void setMark(double);

	static int getCount();

	string getInfo();
};