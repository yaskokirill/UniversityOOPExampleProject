#include "Integer.h"

int Integer::getValue() {
	return value;
}

void Integer::setValue(int value) {
	this->value = value;
}

Integer Integer::add(Integer integer) {
	Integer temp{ value + integer.value };
	return temp;
}

Integer Integer::sub(Integer integer) {
	return Integer(value - integer.value);
}

Integer Integer::mul(Integer integer) {
	return Integer(value * integer.value);
}

Integer Integer::div(Integer integer) {
	return Integer(value / integer.value);
}

Integer Integer::mod(Integer integer) {
	return Integer(value % integer.value);
}

Integer Integer::power(int n) {
	return Integer(pow(value, n));
}

Integer Integer::opp() {
	return Integer(-value);
}