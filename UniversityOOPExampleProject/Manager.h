#pragma once
#include "Group.h"

class Manager {
public:
	double getMaxMark(Group group);
	double getMinMark(Group group);
	double calcAvgMark(Group group);
	Student getBestStudent(Group group);
};