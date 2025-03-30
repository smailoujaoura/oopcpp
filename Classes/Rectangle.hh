#pragma once

class Rectangle
{
	private:
		int	length;
		int	width;
	public:
		int		area();
		Rectangle(int length, int width);
		~Rectangle();
};