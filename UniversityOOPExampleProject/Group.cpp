#include "Group.h"

int Group::getSize() {
	return size;
}

void Group::add(Student student) {
	if (size == 0) {
		list = new Student[1];
		list[0] = student;
	}
	else {
		Student* temp = new Student[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = student;
		delete[] list;
		list = temp;
	}

	size++;
}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = temp[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

void Group::remove(Student student) {
	int index = findFirstIndex(student);
	remove(index);
}

int Group::findFirstIndex(Student student) {
	for (int i = 0; i < size; i++)
	{
		if (student.getName() == list[i].getName()
			&& student.getAge() == list[i].getAge()
			&& student.getMark() == list[i].getMark()) {
			return i;
		}
	}

	return -1;
}

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return NULL;	//Student()
}

string Group::getInfo() {
	string s = "Lit of students:";

	for (int i = 0; i < size; i++)
	{
		s += "\n" + to_string(i + 1) + ") ";
		s += list[i].convert();
	}

	return s;
}