# OOP
## Classes, constructor, destructor, operators
### Classes and Objects:
	- any object can be modeled with a class that has (properties) attributes and methods
	- let's say we have a class representing a rectangle, then it will have attributes: width, length,... methods: calculateArea, calculateCircumference, calculateDiagonal, ...
	- The class in C++ has a style of writing: a header and an implementation. We will later talk about why header and implementation
	- public means that any function in the right scrope can get to those attributes and manipulate them.
	- private means that these properties (attributes and methods) can only be  accessed from inside the class through (getters and setters, mowat).
	- this pointer: it gets the current object(the current instance of this class)
	- if you want attributes to be shared between instances or objects, make them static.

### Constructors and Destructors:
	- Public: Use when objects should be freely created and destroyed.
		Private: Use to prevent direct instantiation or destruction, often with factory methods or singleton patterns.
		Protected: Use when only derived classes should instantiate or destroy the object.
	- Yes, making them public is fine as a beginner unless you have a specific reason to restrict object creation or destruction. This allows your class to be instantiated and destroyed normally without extra complications.
	- When we declare an instance of a class it creates and object and the constructor is called.
	- When we go out of scope, the destructors for the objects get called to free resources if necessary
	- we can always guarantee initialization and achieve object properties with default constructor that has values.
	- Creting the class needs this: Rectangle.hhp which will hold the class definition
		Rectangle.cpp which we include rectangle.hh in and define the implementations. functions etc.

### Operators:
	- 