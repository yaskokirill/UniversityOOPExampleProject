#pragma once
#include "Student.h"

class Group
{
private:
	Student list[30];
	int size = 0;

public:
	int getSize();
	bool add(Student student);
	//bool remove(Student student);
	Student get(int index);
	string getInfo();
	//...
};
