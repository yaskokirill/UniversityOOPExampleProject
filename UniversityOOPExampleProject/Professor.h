#pragma once
#include "Worker.h"

class Professor : public Worker
{
public:
	Professor() {
		cout << "default constructor of Professor" << endl;
	}

	~Professor() {
		cout << "destructor of Professor" << endl;
	}
};
