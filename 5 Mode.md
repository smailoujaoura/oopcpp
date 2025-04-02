## Compilation, Preprocessor directives
### Compilation
	- refer to image 002
	- The Preprocessor processes the files and adds stuff and removes stuff and changes stuff
	- The Compiler will transform the files into .s, codes in Aseembly language.
	- The Assembler assemble the files into object files
	- The Linker will link everything with a valid start point.
	- To stop at a particular step of compilation:
		- First, preprocessing: g++ -E file.cc -o name
			- The preprocess might remove some symbols that were not used.
		- Second, compiling: -S
			- Learn assembly...
			- Name mangling: https://en.wikipedia.org/wiki/Name_mangling
			- The C++ compiler does name mangling in order to allow function overloading: method with same name but different sigs.
			- and the reason you put the keyword 'extern' is for name mangling...
		- Thirdly, assembling: -c
			- can use nm to view object file symbols.
		- Lastly, linking.
	- Mangled names: 
		- If you want to call a method that is in C++ from C code, you should put extern before it, but the other way around is not a problem as C++ is a superset of C.
- A few word on Name Mangling:
	- It is modifying var/fun names to avoid naming conflicts in languages that support encapsulation or overloading. 

## Preprocessor directives
	- 