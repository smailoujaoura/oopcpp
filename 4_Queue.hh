#pragma once
#include "4_Apps.hh"

namespace ds
{
	template <class T>
	class MyQueue: protected DoubleLinkedList<T> // protected to now reveal the inheirted properties and that is achived by all inherited becoming private
	{
		public:
			void	push(T value);
			T		pull();
	};
	
	template <class T>
	void	MyQueue<T>::push(T value)
	{
		this->addFront(value);
	}

	template <class T>
	T	MyQueue<T>::pull()
	{
		Node_d<T>	*node = this->getLast();
		T			value = node->content;
		if (node == nullptr)
		{
			return (int)((unsigned int)-1);
		}
		this->last = this->last->back;
		delete node;
		if (this->last == nullptr)
		{
			this->front = nullptr;
		}
		else
		{
			this->last->next = nullptr;
		}
		return (value);
	}
}
