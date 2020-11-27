#pragma once
#include <iostream>
#include <cassert>
class Rectangle
	{
	private:
		double length;
		double height;

	public:
		Rectangle(double length, double height);
		Rectangle(const Rectangle& rect);
		~Rectangle();
		void print() const;
		double getArea() const;
		double getPerimeter() const;
	};

	Rectangle::Rectangle(double len, double hgt)
		: length(len), height(hgt)
	{
		if ((length <= 0.0) || (height <= 0.0))
		{
			std::cout << "No rectangle can be made!" << std::endl;
			assert(false);
		}
	}

	Rectangle::Rectangle(const Rectangle& rect)
		: length(rect.length), height(rect.height)
	{

	}
	Rectangle :: ~Rectangle()
	{

	}



