- sometimes I need "do while" construct to call and API and then see what to do after.
- the diagonal of a matrix has property i = j; under diagonal has property i < j; above i > j
- object oriented programming and templates needed to understand the smart pointer which will allow you to avoid "new operator"
- lambda function: [&] by refrence, [] by value
	auto add = [a, &b](int a, int b)->int
	{
		return a + b;
	};
	[] no capture of the surrouding scope: the scrope where the lambda is defined, meaning only global variables or passed ones the function will have access to, [=] capture by value, [&] by refrence  
- we can send a lambda instead of a function pointer
	removeNodeIf(t_list **head, [](t_list *node)->bool{
		return (node->content > 100);
	})
		- if removeNodeIf function is a template function then there is no problem in sending to it a capturing lambda, but otherwise it only excpets a non capturing one or a real function pointer.
- a functor in C++ is an object that can be called like a function. It is any class or struct that overlaords the operator().
- the function pointer and lambda are always used in legacy codes when you don't want to change the function signature.

- binary search tree, BST: you construct the binary search from a sorted array and then build recursivly by picking up the middle element, this can also be done without sorting the array in linear time * logathmic time, linear time looping throug the array and logarithmic time for inserting, but what if: they are already sorted, or reverse sorted, not totally random, will 
	- you can make an array on the fly like this: makeBST(new int[]{1, 2, 3, 4, 5, 6, 7}, 0, 6);
- pre-order: root, left, right 
- in-order: left, root, right
- post-order: left, right, root
#define newNode(val) (new TYPE(value))
#define getLeftChild(node) (node##->left)
#define FIELD(name, element) name##_##element
	- ## this is a concatenation operator in the C/C++ preprocessor
#define getValue(node) (node##->value)
- non const global variables should be avoided at all costs. If you are in dire need for a global variable make it static.
