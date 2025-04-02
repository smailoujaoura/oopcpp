#include <iostream>

#define MAX 1024 // if not used anywhere it will not be anywhere
// if used it will be just replaced

#define GREATER(a, b) (a > b? a:b) 

// int	addition(int a, int b)
// {
// 	return (a + b);
// }

#ifdef x86
typedef long LONG;
#define SHIFT 16
#else
typedef long long LONG;
#define SHIFT 32
#endif

// elif, ifndef, 
#ifndef __cplusplus
	#error A C++ compiler is required!
#endif
// #ifdef __cplusplus
// 	#error A C++ compiler is required!
// #endif
// something 

LONG	shift(LONG x)
{
	return x << SHIFT;
}

extern "C" int	addition(int a, int b)
{
	return (a + b);
}

int main()
{
	std::cout << "Result: " << addition(6, 4) << std::endl;
	std::cout << MAX << std::endl;
	std::cout << GREATER(10, 20) << std::endl;
	std::cout << shift(1) << std::endl;

}