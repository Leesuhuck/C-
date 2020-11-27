#include "Rectangle2.h"
#include <iostream>

int Rectangle2::count = 0;

Rectangle2::Rectangle2(double len, double hgt) : length(len), heigth(hgt)
{
	count++;
}

Rectangle2::Rectangle2() : length(0.0), heigth(0.0)
{
	count++;
}

Rectangle2::Rectangle2(const Rectangle2& rect) : length(rect.length), heigth(rect.heigth)
{
	count++;
}

Rectangle2 :: ~Rectangle2()
{
	count--;
}

int Rectangle2::getCount()
{
	return count;
}
/*
int main()
{
	{
		Rectangle2 rect1(3.2, 1.2);
		Rectangle2 rect2(1.5, 2.1);
		Rectangle2 rect3;
		Rectangle2 rect4(rect1);
		Rectangle2 rect5(rect2);
		std::cout << "Count of objects: " << rect5.getCount() << std::endl;
	}
	std::cout << "Count of objects: " << Rectangle2::getCount();
	return 0;
}
*/