#pragma once
#include "Student.h"

class Group
{
private:
	Student* list;
	int size;

public:
	Group() : size(0) {}

	void add(Student st);
	void remove(int index);
	void remove(Student student);

	bool contain(Student student);
	int getFirstIndex(Student student);
	int getLastIndex(Student student);

	int getSize();
	Student get(int index);

	string convertToString();
};
