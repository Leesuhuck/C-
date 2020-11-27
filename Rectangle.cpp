#include "Rectangle.h"
#include <iostream>
#include <cassert>

void Rectangle::print() const
{
	std::cout << "A rectangle of " << length << " by " << height << std::endl;
}
double Rectangle :: getArea() const
{
	return (length * height);
}
double Rectangle :: getPerimeter() const
{
	return (2 * (length + height));
}
/*
int main()
{
	Rectangle rect1(3.0, 4.2);
	Rectangle rect2(5.1, 10.2);
	Rectangle rect3(rect2);

	std::cout << "Rectangle 1:";
	rect1.print();
	std::cout << "Area: " << rect1.getArea() << std::endl;
	std::cout << "Perimeter: " << rect1.getPerimeter() << std::endl << std::endl;

	std::cout << "Rectangle 2: ";
	rect2.print();
	std::cout << "Area: " << rect2.getArea() << std::endl;
	std::cout << "Perimter" << rect2.getPerimeter() << std::endl << std::endl;

	std::cout << "Rectangle 3:";
	rect3.print();
	std::cout << "Area: " << rect3.getArea() << std::endl;
	std::cout << "Perimter" << rect3.getPerimeter() << std::endl << std::endl;
	return 0;
}
*/