## Files 
### Streams
	- you need an ofstream object and associate it with a file.
	- Using cin and getline somewhat creates a small problem where cin does not include \n and getline does, so to solve this little problem:
		- 
	
### Things that need (more) study
	- why did we declare function to return vector and not a pointer to a vector...?
		- For your final concern about returning stack variables: the vector lines is indeed created on the stack inside the function, but when returning it, C++ creates a copy or (more likely with modern compilers) uses move semantics to efficiently transfer the data to the caller's context without doing a deep copy of all the strings.
		- RVO
	- how does auto work and why need for *
		- vector.begin() returns an iterator, which is like a pointer, and not a direct element of the vector. That pointer-like thingy so-points to an element in the container. So to get the actual value of the pointer-like thingy we so-derefrence it...
		- This can be used too:
			- for (const auto &line: lines) { std::cout << line << std::end; }
			- but sadly there is no auto, range based loops in C++98
	- how does std::cin >> std::ws and its difference from ign(streamsize.max())
	- ios::binary flag?
	- by default the constructor for streams is in, if no flags are passed
	- if any flags are set then the default will be overwritten so if we need file for input, reading, we must do ios::in | and whatever other flags ios::binary, etc.
	- ios::ate, otherwise at the beginning 
		- (the pointer) will be at the end of the file?!
		- std::streampos size = myfile.tellg();
		char	*memblock = new char[size]; all data to be moved here
		myfile.seekg(0, ios::beg)
			- move the offset to the beginning because we moved it to the end firstly.
		- myfile.read(memblock, size);
			- reads as much as size and copies it to memblock, but should we have done size + 1 for null char.
		- myfile.close();
			- always close the stream when done with it.
		we already read into the buffer what we basically do now is set the pointers to each block of each employee:
			- Employee	*employee = (Employee*)(memblock + byteIndex) <--- this in a loop while (byteIndex < size)
				- byteIndex += sizeof(Employee);
				but with this you only get the last read block so either you have an array, but what's better than a vector:
					- fileEmployee.push_back(employee);

### Safety and Exceptions handling
	- More on this later on.
	- Try-catch won't work on some constructs unless you enable them
		- file.exceptions(std::ifstream::failbit | std::ifstream::badbit);

