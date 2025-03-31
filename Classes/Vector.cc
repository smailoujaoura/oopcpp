#include <iostream>
#include "Vector.hh"

template <class T2>
void	c_vector<T2>::add(T2 value)
{
	s_node<T2> *newNode = new s_node<T2>();
	// s_node<T2> *newNode = new s_node<T2>;

	newNode->val = value;
	if (root == nullptr)
	{
		newNode->next = nullptr;
		root = newNode;
		return ;
	}

	newNode->next = root;
	root = newNode;
}

// a template declaration applies to a single declaration or definition that immediately follow it
// that's why we need to keep doing template <class T>

template <class T2>
c_vector<T2>::~c_vector()
{
	s_node<T2>	*tmp;
	while (root != nullptr)
	{
		tmp = root;
		root = root->next;
		delete tmp;
	}
	std::cout << "destroyted\n";
}

template <class T2>
s_node<T2>	*c_vector<T2>::getRoot()
{
	return this->root; // mowat, pw
	// why does this->root work as well as just "root"
	// all memebr functions have access to all attributes in the class so that's why it works
	// all non static member functions have access to the implicit "this" pointer which is useful when there is name collusion
	// and when it also help in template programming.
}

template class c_vector<int>;
template class c_vector<std::string>;