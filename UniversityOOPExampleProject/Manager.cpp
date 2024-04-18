#include "Manager.h"

double Manager::getMaxMark(Group group) {
	Student student = group.get(0);
	double max = student.getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (max < group.get(i).getMark()) {
			max = group.get(i).getMark();
		}
	}

	return max;
}

double Manager::getMinMark(Group group) {
	double min = group.get(0).getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (min < group.get(i).getMark()) {
			min = group.get(i).getMark();
		}
	}

	return min;
}

double Manager::calcAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	return avg / group.getSize();
}

Student Manager::getBestStudent(Group group) {
	double bestMark = getMaxMark(group);
	Student st = NULL;

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getMark() == bestMark) {
			st = group.get(i);
			break;
		}
	}

	return st;
}