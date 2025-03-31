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
	int	area()
	{
		return (this->length * this->width);
	}
};

int main()
{
	class Rectangle	*one = new Rectangle(10, 2);
	// one->setValues(10, 2);
	std::cout << one->area() << std::endl;
	delete one;
}