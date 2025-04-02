#pragma once

#include <iostream>

class Square
{
	public:
		Square(int side)
		{
			this->side = side;
			std::cout << "Constructed\n";
		}
		~Square()
		{
			std::cout << this->side << "-Destroyed\n";
		}
		int	area()
		{
			return (this->side * this->side);
		}
	private:
		int	side;
};