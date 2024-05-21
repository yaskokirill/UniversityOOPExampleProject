#include "Worker.h"

double Worker::getSalary() {
	return salary;
}

void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::getInfo() {
	string s = "";
	s += getName() + ": age = ";
	s += to_string(getAge()) + ", salary = ";
	s += to_string(salary);
	s += to_string(id);

	return s;
}