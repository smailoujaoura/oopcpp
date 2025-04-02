#pragma once
#include <iostream>

namespace ds
{
	template <class T>
	struct Node_d
	{
		T 		content;
		Node_d	*next;
		Node_d	*back;
	
		//  I prefer a constructor-like initer
		Node_d(T data)
		{
			content = data;
			next = nullptr;
			back = nullptr;
		}
	};

	template <class T> // you might want to distinguish it from other templated types giving T2 
	class DoubleLinkedList
	{
		public:
			~DoubleLinkedList();
			void		addFront(T value);
			void		addBack(T value);
			Node_d<T>	*getFirst();
			Node_d<T>	*getLast();
		private:
			Node_d<T>	*front = nullptr;
			Node_d<T>	*last = nullptr;
	};
}
