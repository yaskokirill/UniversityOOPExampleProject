#include "Manager.h"
#include "Professor.h"

int main() {


	Worker worker1;
	worker1.setName("Alex");
	worker1.setAge(35);
	worker1.setSalary(3000);

	cout << worker1.getInfo() << endl;

	return 0;
}