#include <iostream>
#include "Stack.hh"

#include "Vector.cc"

int main()
{
	Stack_c<int>	*one = new Stack_c<int>;
	std::cout << one->getSize() << std::endl;
	one->push(111);
	one->push(222);
	one->push(333);
	std::cout << one->getSize() << std::endl;
	std::cout << one->pop() << std::endl;
	std::cout << one->getSize() << std::endl;

	Stack_c<std::string>	*two = new Stack_c<std::string>;
	std::cout << two->getSize() << std::endl;
	two->push("One");
	two->push("Two");
	two->push("Three");
	std::cout << two->getSize() << std::endl;
	std::cout << two->pop() << std::endl;
	std::cout << two->getSize() << std::endl;
}