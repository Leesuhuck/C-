#include "Header basics.h"

int main() {

	Student stu1(5);
	Student stu2(7);

	stu1.setMax(10);
	stu2.setMax(20);
	
	std::cout << stu1.getId() << std::endl;
	std::cout << stu1.getMax() << std::endl;

	std::cout << stu2.getMax() << std::endl;
	std::cout << stu1.getavg() << std::endl;


	return 0;

}
