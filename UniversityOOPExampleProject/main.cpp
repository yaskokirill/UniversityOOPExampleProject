#include "Manager.h"
#include "Professor.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Worker human;

	Student st{ "Alex", 14, 5 };

	st = st + 5;

	cout << st.getInfo() << endl;

	//human.id = 100;
	//cout << human.id << endl;

	/*Worker worker1;
	worker1.setName("Alex");
	worker1.setAge(35);
	worker1.setSalary(3000);

	cout << worker1.getInfo() << endl;*/

	return 0;
}