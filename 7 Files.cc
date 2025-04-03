#include <iostream>
// #include <unistd.h>

#include <fstream>

#include <vector>

#include <limits>

// #include <exception>

enum Options{add=1, view=2};

void	addToFile(std::string text, std::string filePath)
{
	try
	{
		std::ofstream	file;
		file.open(filePath, std::ios::out | std::ios::app); // open for output and append mode
		file << text + "\n"; // this can be done in C++ thanks to operator overloading I think
		file.close();
		std::cout << "===== Added =====\n";
	}
	catch (std::exception& e)
	{
		std::cout << "---> Standard Exception: " << e.what() << std::endl;
	}
}

std::vector<std::string>	readFromTextFile(std::string filePath)
{
	std::vector<std::string>	lines;
	std::ifstream				file(filePath); // can do this as well
	std::string					line;

	if (file.is_open())
	{
		while (getline(file, line)) // it has an overlaod boolean operator that evaluates to false when EOF or Fail occurs, you can either way use if (file.eof || file.fail) as well 
		{
			lines.push_back(line);
		}
		file.close();
	}
	else
	{
		std::cout << "!! Unable to open file\n";
	}
	// file.exceptions(std::ifstream::failbit | std::ifstream::badbit); // what happens here when file is deleted.. is that the constructor for opening the file fails itself.
	// try
	// {
	// 	while (getline(file, line))
	// 	{
	// 		lines.push_back(line);
	// 	}
	// 	file.close();
	// }
	// catch (std::exception &exception)
	// {
	// 	std::cerr << "---> Standard Exception: " << exception.what() << std::endl;
	// }
	return (lines);
}

void	addToRecord()
{
	std::string	line;
	while (true)
	{
		std::cout << "1-Add\n2-View\n3-Exit\nEnter Option: ";
		int	options = 0;
		std::cin >> options;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (options == Options::add) {
			// std::cin >> std::ws;
			std::cout << "Enter text: ";
			// std::cin >> line;
			// std::cout << "Enter text: ";
			getline(std::cin, line);
			addToFile(line, "files/1.txt");
		} else if (options == Options::view) {
			std::cout << "========= Content ========\n";
			std::vector/*<std::string> inferred by the compiler fro mthe return type of the function*/ lines = readFromTextFile("files/1.txt");// how does this work given we declared the object in the stack and returning it from the stack of that function????
			for (auto line = lines.begin(); line != lines.end(); line++)// this is basically an iterator: begin with the first element in the vector and go all the way until the last
			{
				std::cout << *line << std::endl; // we derefrence because(ask library designers), because 'auto' keyword?? 
			}
		} else {
			break;
		}
	}
}

int main()
{
	// std::ofstream	file;
	// std::ifstream	rand;
	// file.open("files/1.txt", std::ios::out | std::ios::app); // open for output and append mode
	// rand.open("/dev/random", std::ios::in);
	// for (int i = 0; i < 10, i++)
	// {
	// 	// write()
	// }
	// file << "one two";
	// file.close();
	addToRecord();
}