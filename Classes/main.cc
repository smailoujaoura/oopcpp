#include <iostream>
#include "Vector.hh"
// #include "Vector.cc"

int	main()
{
	c_vector<int> myvector;

	myvector.add(1);
	myvector.add(2);
	myvector.add(3);

	s_node<int>	*ptr = myvector.getRoot();
	while (ptr != nullptr)
	{
		std::cout << ptr->val << std::endl;
		ptr = ptr->next;
	}

	c_vector<std::string> stringVector;
	stringVector.add("One");
	stringVector.add("Two");
	stringVector.add("Three");

	s_node<std::string> *ptr2 = stringVector.getRoot();
	while (ptr2 != nullptr)
	{
		std::cout << ptr2->val << std::endl;
		ptr2 = ptr2->next;
	}
}