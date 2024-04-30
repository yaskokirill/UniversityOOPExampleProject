#include "Human.h"

string Human::getName() {
	return name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE) {
		this->age = age;
	}
}