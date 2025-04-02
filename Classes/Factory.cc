#include <iostream>
#include "Shapes.hh" // doing this import will import all the classes

enum class Shapes_e{ Rectangle=1, Square=2 };
class ShapeFactory
{
	public:
		Shape *getShape(Shapes_e shape, int length, int width);
};

Shape	*ShapeFactory::getShape(Shapes_e shape, int length, int width)
{
	Shape	*result = nullptr;

	switch (shape)
	{
		case Shapes_e::Rectangle:
		{
			result = new Rectangle(length, width);
			break ;
		}
		case Shapes_e::Square:
		{
			result = new Square(length);
			break ;
		}
		default:
		{
			result = nullptr;
			break ;
		}
	}
	return (result);
}

int main()
{
	// Shapes_e:: // this is just a way to organize the code and not hardcode stuff'

	ShapeFactory shapeFactory;
	int	type = 1;
	while (type)
	{
		std::cout << "------------------------" << std::endl;
		std::cout << "1- Rectangle\n";
		std::cout << "2- Square\n";
		std::cout << "3- Exit\n";
		std::cout << "Enter shape number: ";
		std::cin >> type;
		Shape	*shape = shapeFactory.getShape((Shapes_e)type, 10, 20);
		if (shape == nullptr)
		{
			type != 0 ? ([](){ std::cout << "Issues\n"; })() : (void)0; // lambda expression btw
			// []() {
			// 	std::cout << "Issues\n";
			// }();
			break ;
		}
		std::cout << std::endl << shape->area() << std::endl;
		std::cout << "Drawn: " << typeid(shape).name() << "\n\n";
		delete shape;
	}
	std::cout << "exit..\n";
}