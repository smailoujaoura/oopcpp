#include "4_Apps.hh"

namespace ds
{
	// template <class T>
	// DoubleLinkedList<T>::~DoubleLinkedList()
	// {
	// 	Node_d<T>	*ptr = this->front;
	// 	while (ptr != nullptr)
	// 	{
	// 		Node_d<T>	*tmp = ptr;
	// 		ptr = ptr->next;
	// 		delete tmp;
	// 	}
	// 	std::cout << "Destroyed\n";
	// }

	template <class T>
	DoubleLinkedList<T>::~DoubleLinkedList()
	{
		while (this->front != nullptr)
		{
			std::cout << "Deleted " << this->front->content << std::endl;
			this->front = this->front->next;
			if (this->front)
			{
				delete this->front->back;
			}
		}
		std::cout << "Destroyed\n";
	}

	template <class T>
	void	DoubleLinkedList<T>::addFront(T value)
	{
		Node_d<T>	*newNode = new Node_d(value);

		if (front == nullptr)
		{
			this->front = newNode;
			this->last = newNode;
			return ;
		}
		newNode->next = this->front;
		{
			this->front->back = newNode;
		}
		this->front = newNode;
	}
	
	template <class T>
	void	DoubleLinkedList<T>::addBack(T value)
	{
		Node_d<T>	*newNode = new Node_d(value);
		if (this->last == nullptr)
		{
			this->front = newNode;
			this->last = newNode;
		}
		this->last->next = newNode;
		newNode->back = last;
		last = newNode;
	}

	template <class T>
	Node_d<T>	*DoubleLinkedList<T>::getFirst()
	{
		return (this->front);
	}

	template <class T>
	Node_d<T>	*DoubleLinkedList<T>::getLast()
	{
		return (this->last);
	}
}

template class ds::DoubleLinkedList<int>;
template class ds::DoubleLinkedList<std::string>;

