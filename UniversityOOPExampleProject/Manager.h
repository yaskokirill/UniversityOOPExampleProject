#pragma once
#include "Student.h"

class Manager {
public:
	double getMaxMark(Student* students, int length) {
		double max = students[0].getMark();

		for (int i = 1; i < length; i++)
		{
			if (max < students[i].getMark()) {
				max = students[i].getMark();
			}
		}

		return max;
	}

	double getMinMark(Student* students, int length) {
		double min = students[0].getMark();

		for (int i = 1; i < length; i++)
		{
			if (min < students[i].getMark()) {
				min = students[i].getMark();
			}
		}

		return min;
	}

	double calcAvgMark(Student* students, int length) {
		double avg = 0;

		for (int i = 0; i < length; i++)
		{
			avg += students[i].getMark();
		}

		return avg / length;
	}

	Student getBestStudent(Student* students, int length) {
		double bestMark = getMaxMark(students, length);
		Student st = NULL;

		for (int i = 0; i < length; i++)
		{
			if (students[i].getMark() == bestMark) {
				st = students[i];
				break;
			}
		}

		return st;
	}
};