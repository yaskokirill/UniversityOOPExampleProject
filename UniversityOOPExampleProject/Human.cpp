#include "Human.h"

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0 && age < 90) {
		this->age = age;
	}
}

string Human::getInfo() {
	string s = "";

	s += name + ": age = ";
	s += to_string(age);

	return s;
}