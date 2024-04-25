#include "Manager.h"

double Manager::getMaxMark(Group group) {
	double max = group.get(0).getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (group.get(i).getMark() > max) {
			max = group.get(i).getMark();
		}
	}

	return max;
}

double Manager::getMinMark(Group group) {
	double min = group.get(0).getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (group.get(i).getMark() < min) {
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
	double mark = getMaxMark(group);
	Student st;

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getMark() == mark) {
			st = group.get(i);
			break;
		}
	}

	return st;
}

Student Manager::getWorstStudent(Group group) {
	double mark = getMinMark(group);
	Student st;

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getMark() == mark) {
			st = group.get(i);
			break;
		}
	}

	return st;
}