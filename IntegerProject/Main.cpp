#include <iostream>
#include "Integer.h"

int main() {
	Integer i1{ 5 };
	Integer i2{ 5 };
	Integer addtest = i1.add(i2);
	Integer subtest = i1.sub(i2);
	Integer multest = i1.mul(i2);
	Integer divtest = i1.div(i2);
	Integer modtest = i1.mod(i2);
	Integer powtest = i1.power(2);
	Integer opptest = i1.opp();

	cout << addtest.getValue() << endl;
	cout << subtest.getValue() << endl;
	cout << multest.getValue() << endl;
	cout << divtest.getValue() << endl;
	cout << modtest.getValue() << endl;
	cout << powtest.getValue() << endl;
	cout << opptest.getValue() << endl;
}