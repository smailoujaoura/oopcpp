#include <iostream>
#include "4_Apps.hh"
#include "4_Queue.hh"

int main()
{
	// std::cout << "======= Integer ========\n";
	// {
	// 	ds::DoubleLinkedList<int>	dlist;
	// 	dlist.addFront(1);
	// 	dlist.addFront(2);
	// 	dlist.addFront(3);
	// 	ds::Node_d<int>	*ptr = dlist.getFirst();
	// 	while (ptr != nullptr)
	// 	{
	// 		std::cout << ptr->content << std::endl;
	// 		ptr = ptr->next;
	// 	}
	// 	ptr = dlist.getLast();
	// 	while (ptr)
	// 	{
	// 		std::cout << ptr->content << std::endl;
	// 		ptr = ptr->back;
	// 	}
	// }
	// std::cout << "======= String ========\n";
	// {
	// 	ds::DoubleLinkedList<std::string>	dlist;
	// 	dlist.addFront("One");
	// 	dlist.addFront("Two");
	// 	dlist.addFront("Three");
	// 	ds::Node_d<std::string>	*ptr = dlist.getFirst();
	// 	while (ptr != nullptr)
	// 	{
	// 		std::cout << ptr->content << std::endl;
	// 		ptr = ptr->next;
	// 	}
	// 	ptr = dlist.getLast();
	// 	while (ptr)
	// 	{
	// 		std::cout << ptr->content << std::endl;
	// 		ptr = ptr->back;
	// 	}
	// }

	// std::cout << "======= Queue ========\n";
	{
		ds::MyQueue<int>	queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		std::cout << queue.pull() << std::endl;
		std::cout << queue.pull() << std::endl;
		std::cout << queue.pull() << std::endl;
	}
}