#pragma once
#include <iostream>

class Rectangle2
{
private:
	double length;
	double heigth;
	static int count;
public:
	Rectangle2(double length, double heigth);
	Rectangle2();
	~Rectangle2();
	Rectangle2(const Rectangle2& rect);
	static int getCount();
};


