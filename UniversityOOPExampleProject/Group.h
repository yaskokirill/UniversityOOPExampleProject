#pragma once
#include "Student.h"

class Group
{
private:
	Student* list;
	int size = 0;

public:
	int getSize();
	void add(Student student);
	void remove(int index);
	void remove(Student student);

	int findFirstIndex(Student student);

	Student get(int index);
	string getInfo();
	//...
};
