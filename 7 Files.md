## Files 
### Streams
	- you need an ofstream object and associate it with a file.
	- Using cin and getline somewhat creates a small problem where cin does not include \n and getline does, so to solve this little problem:
		- 
	
### Things that need (more) study
	- why did we declare function to return vector and not a pointer to a vector...?
	- how does auto work and why need for *
	- how does std::cin >> std::ws and its difference from ign(streamsize.max())

### Safety and Exceptions handling
	- More on this later on.
	- Try-catch won't work on some constructs unless you enable them
		- file.exceptions(std::ifstream::failbit | std::ifstream::badbit);