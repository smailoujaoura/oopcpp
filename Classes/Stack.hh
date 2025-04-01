#pragma once
#include "Vector.hh"


template <class T>
class Stack_c: public c_vector<T>
{
private:
	int	size = 0;
public:
	void	push(T value);
	T		pop();
	int		getSize();
};

template <class T>
void	Stack_c<T>::push(T value)
{
	this->add(value);
	this->size++;
}

template <class T>
T	Stack_c<T>::pop()
{
	if (size == 0)
		throw std::runtime_error("Stack is empty");
		//return (nullptr);
	s_node<T>	*tmp = this->root;
	T val = tmp->val;
	this->root = this->root->next;
	delete tmp;
	this->size--;
	return (val);
}

template <class T>
int	Stack_c<T>::getSize()
{
	return (this->size);
}