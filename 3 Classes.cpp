#include <iostream>
#include <vector>

class Rectangle
{
	// int	test1; default properties are private by default
	private:
		int	length;
		int	width;
	public:
		int		area();
		void	setSides(int length, int width);
		Rectangle(int length, int width);
		~Rectangle();
		// int	test2;
};

Rectangle::Rectangle(int length, int width)
{
	std::cout << "Instantiated!\n";
	this->length = length;
	this->width = width;
}

Rectangle::~Rectangle()
{
	// when 
	std::cout << "Destroyed!\n";
}

int	Rectangle::area()
{
	int	area; // will C++ have a variable of same name as function
	area = this->length * this->width; // this is a pointer
	return (area);
}

void	Rectangle::setSides(int length, int width) // 
{
	this->length = length;
	this->width = width;
}

int	main()
{
	Rectangle	rect1(20, 5);
	// Rectangle	*rect1 = new Rectangle;
	// rect1.setSides(20, 5);
	// std::cout << rect1.length << std::endl; // compiler does not like this 
	int	area1 = rect1.area();
	std::cout << area1 << std::endl;
	{
		// Rectangle rect3;
		// rect3.setSides(300, 2);
		// std::cout << rect3.area() << std::endl;
		// as you can see when we go out of this local domain the object rect3 will be destroyed...
	}
	Rectangle	rect2(10, 2);
	// rect2.setSides(10, 2);
	int	area2 = rect2.area();
	std::cout << area2 << std::endl; // these two instances (objects) are totally different entities 

	std::string	name;
	std::vector<std::string> myvector;
	while(true)
	{
		std::cout << "Name: ";
		std::getline(std::cin, name);
		if(name.empty())
			break ;
		myvector.push_back(name);
	}
	for (const auto &str : myvector)
		std::cout << str << std::endl;
	for (auto it = myvector.begin(); it != myvector.end(); it++)
		std::cout << *it << "\t";
	std::cout << std::endl;
}