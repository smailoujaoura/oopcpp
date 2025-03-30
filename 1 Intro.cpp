#include <iostream>

/*
	you can include a name space and not worry about always typing it.
	using namespace std;
	using namespace std::cout;
	std::cout is a global object that handle ouput. he is an instance of the class: std::stream
*/

int	main()
{
	std::cout << "Welcome to C++";
	std::cout << std::endl;

	// wchar_t pi = L'π';
	std::cout << L'π' << std::endl;
	std::wcout << L'π' << std::endl;

	return 0;
}