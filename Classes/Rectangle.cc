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
	return (this->length * this->width);
}

int	main()
{
	Rectangle	rect1(20, 5);
	std::cout << rect1.area() << std::endl;
}
