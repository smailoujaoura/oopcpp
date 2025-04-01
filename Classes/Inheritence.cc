#include <iostream>
#include "Inheritence.hh"

// to make things easy to understand we will put the definitions here
class Shape
{
// private:
// 	int	length;
// 	int	width;
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
	virtual int	area() = 0; // the virtual methods means that yes the derived classes will inherit it but they have to implement it; they are required.
	// it is a must for the inheriter to implement the method.
	// = 0 means that it has no implementation, but it can have implementation, just to supress the compiler error.
	// void	setValues(int length, int width)
	// {
	// 	this->length = length;
	// 	this->width = width;
	// }

};

// class Rectangle
// {
	// private:
	// 	int length;
	// 	int	width;
	// public:
	// 	void	setValues(int length, int width)
	// 	{
		// 		this->length = length;
		// 		this->width = width;
		// 	}
		// 	int	area()
		// 	{
			// 		return (this->length * this->width);
// 	}
// };

// instead of redefining the properties we may inherit from a base class to a child class
class Rectangle: public Shape // I inherited them as public, i can also inherit them as protected
{
public:
	Rectangle(int length, int width):Shape(length, width)
	{
		this->length = length;
		this->width = width;
		std::cout << "Rectangle create\n";
	}
	// int	area()
	// {
	// 	return (this->length * this->width);
	// }
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
	// int	area()
	// {
	// 	return (this->length * this->width);
	// }
	// all these derived classes have the function area(), so why not just have it in the base class and overload it.
	// Overload: when you have a function with the same name and different formal params
	// Override: when you have a method being changed by a derived class
	virtual int	area() // if I don't want further inheritees to override the function I can remove virtual... so the normal is not to have this virtual in the derived class
	{
		return (this->length * this->width);
	}
};	

int main()
{
	class Rectangle	*one = new Rectangle(10, 20);
	// one->setValues(10, 2);
	std::cout << one->area() << std::endl;
	delete one;
	class Square	*two = new Square(10);
	std::cout << two->area() << std::endl;
	delete two;
}