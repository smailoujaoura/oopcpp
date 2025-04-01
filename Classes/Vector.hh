#pragma once

template <class T1>
// template <typename T> // or simply just typename
struct	s_node
{
	T1 			val;
	s_node		*next;
	// s_node<T1>	*next;
};

template <class T2>
class c_vector
{
public:
	~c_vector();
	void		add(T2 value);
	s_node<T2>	*getRoot();
protected: // changed from private to protected to be able to inherit from it in Stack
	s_node<T2>	*root = nullptr;
};