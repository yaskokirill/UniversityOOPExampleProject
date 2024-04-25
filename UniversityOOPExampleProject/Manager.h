#pragma once
#include "Group.h"

class Manager {
public:
	static double getMaxMark(Group group);
	static double getMinMark(Group group);
	static double calcAvgMark(Group group);
	static Student getBestStudent(Group group);
	static Student getWorstStudent(Group group);
};