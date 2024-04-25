#include "Group.h"

void Group::add(Student st) {
	if (size == 0) {
		list = new Student[1];
		*list = st;
		//list[0] = st;
	}
	else {
		Student* temp = new Student[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = st;

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
				temp[j++] = list[i];
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

void Group::remove(Student student) {
	int index = getFirstIndex(student);

	if (index != -1) {

		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Group::getFirstIndex(Student student) {
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

int Group::getLastIndex(Student student) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (student.getName() == list[i].getName()
			&& student.getAge() == list[i].getAge()
			&& student.getMark() == list[i].getMark()) {
			return i;
		}
	}

	return -1;
}

bool Group::contain(Student student) {
	for (int i = 0; i < size; i++)
	{
		if (student.getName() == list[i].getName()
			&& student.getAge() == list[i].getAge()
			&& student.getMark() == list[i].getMark()) {
			return true;
		}
	}

	return false;
}


int Group::getSize() {
	return size;
}

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return Student();
}

string Group::convertToString() {
	string s = "Group of students:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].convert() + "\n";
	}

	return s;
}