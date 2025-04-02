#pragma once
#include <iostream>

class Shape
{
	protected:
		int	length;
		int	width;
	public:
		Shape(int length, int width)
		{
			this->length = length;
			this->width = width;
			std::cout << "Shape created\n";
		}
		virtual int	area() = 0;
};

class Rectangle: public Shape
{
	public:
		Rectangle(int length, int width):Shape(length, width)
		{
			this->length = length;
			this->width = width;
			std::cout << "Rectangle create\n";
		}
		virtual int	area()
		{
			return (this->length * this->width);
		}
};

class Square: public Shape
{
	public:
		Square(int side):Shape(side, side)
		{
			this->length = side;
			this->width = side;
			std::cout << "Square created\n";
		}
		virtual int	area()
		{
			return (this->length * this->width);
		}
};
