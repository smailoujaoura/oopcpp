#include <iostream>
#include <memory>
#include "6 Smart.hh"

template <class T>
class SmartPtr
{
	public:
	SmartPtr(T* p)
	{
		ptr = p;
	}
	~SmartPtr()
	{
		delete ptr;
	}
	T	*operator -> ()
	{
		return ptr;
	}
	T	&operator * ()
	{
		return *ptr;
	}
	private:
		T	*ptr;
};

int main()
{
	Square	one(1);
	std::cout << one.area() << std::endl;

	Square	*two = new Square(2);
	std::cout << two->area() << std::endl;
	// delete two; // if you don't do this the deconstructor will never be called, and that's a memory leak.
	// people have problems with keeping track of allocations and cleanups so smart pointer come to the rescue.
	// do this instead for which you have to include memory
	// the idea is that the object will be cleaned when its scope is out.
	std::shared_ptr<Square> three(new Square(3));
	std::cout << three->area() << std::endl;

	SmartPtr<Square>	four(new Square(4)); // understand this in part kinda
	// it's basically new returns a pointer to the object of type Square templated by the class SmartPtr and added 
	// and when the object in the stack four goes out of scope it takes with it our dynamically allocated object
	std::cout << four->area() << std::endl;
}