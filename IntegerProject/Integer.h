#pragma once
#include <iostream>
using namespace std;

class Integer
{
private:
	int value;

public:
	Integer(): value(0) {}
	Integer(int value) : value(value) {}

	int getValue();
	void setValue(int value);

	Integer add(Integer integer);
	Integer sub(Integer integer);
	Integer mul(Integer integer);
	Integer div(Integer integer);
	Integer mod(Integer integer);
	Integer power(int n);
	Integer opp();
};

