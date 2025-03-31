#include <iostream>
#include "Rectangle.hh"

Rectangle::Rectangle(int length, int width)
{
	std::cout << "Instantiated!\n";
	this->length = length;
	this->width = width;
}

Rectangle::~Rectangle()
{
	std::cout << "Destroyed!\n";
}

int	Rectangle::area()
{
	// return (this->length * this->width);
	return (length * width);
}

Rectangle Rectangle::operator+ (const Rectangle &rect)
{
	int	length = this->length + rect.length;
	int	width = this->width + rect.width;
	return Rectangle(width, length);
}

int	main()
{
	class Rectangle	rect1(20, 5); // class can be omitted.
	std::cout << rect1.area() << std::endl;
	class Rectangle	rect2(30, 3);
	std::cout << rect2.area() << std::endl;
	class Rectangle	rect3 = rect1 + rect2;
	std::cout << rect3.area() << std::endl; // we have overloaded + operator
}
