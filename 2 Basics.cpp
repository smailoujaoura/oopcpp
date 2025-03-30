#include <limits>
#include <string>
#include <iostream>
#include <functional>


// typedef struct s_student
// {
// 	std::string name;
// 	float		GPA;
// } t_stduent;

// void f()
// {
// 	std::cout << "Exited" << std::endl;
// }

// int	adder(int a, int b)
// {
// 	return (a + b);
// }

// void	anotherFunction(int (*fPtr)(int, int), int a, int b)
// {
// 	std::cout << fPtr(a, b) << std::endl;
// }

// void	anotherFunction(std::function<int(int, int)> fPtr, int a, int b)
// {
// 	std::cout << fPtr(a, b) << std::endl;
// }

typedef struct s_tree
{
	int				value;
	struct s_tree	*left;
	struct s_tree	*right;

	s_tree (int content)
	{
		value = content;
		left = nullptr;
		right = nullptr;	
	}
}	t_tree;

static t_tree	*makeBST(int *array, int begin, int end);

static int	comparisons;
static int	swaps;

static int	partition(int *array, int begin, int end)
{
	int	pivot = array[end];
	int	i = begin - 1;
	
	for (int j = begin; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			int	temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			swaps++;
		}
		comparisons++;
	}
	i++;
	int	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	swaps++;
	return i;
}

static void	quickSort(int *array, int begin, int end)
{
	if (begin >= end)
		return ;
	int	pivot = partition(array, begin, end);
	quickSort(array, begin, pivot - 1);
	quickSort(array, pivot + 1, end);
}

static void	printTree(t_tree *root)
{
	if (root == nullptr)
		return ;
	printTree(root->left);
	std::cout << root->value << "\t";
	printTree(root->right);
}

void	deleteTree(t_tree *root)
{
	if (root == nullptr)
		return ;
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}

int main()
{
	// atexit(f);

	// int	k;
	// std::cout << "Enter: ";
	// std::cin >> k;
	// std::cout << k << std::endl;

	// std::string name = "test";
	// std::cout << name << std::endl;
	// t_stduent	one;
	// t_stduent 	two;
	// one.name = "Henry";
	// one.GPA = 4.0;
	// two.name = "Kelly";
	// two.GPA = 4.0;
	
	// int a = 9;
	// int	b = 1;
	// anotherFunction(adder, a, b);
	// anotherFunction([=](int a, int b){ return (a - b); }, a, b);
	// std::cout << adder(1, 9) << std::endl;

	// binary tree interview question:
	int	size = 0;
	std::cout << "Enter size of array: ";
	std::cin >> size;
	int	*array = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "array[" << i << "]=";
		std::cin >> array[i];
		// std::cin.ignore(__SIZE_MAX__, '\n');
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// while (std::cin.get() != '\n');
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	for (int i = 0; i < size; i++)
		std::cout << array[i] << "\t";
	std::cout << std::endl;
	quickSort(array, 0, size - 1);
	for (int i = 0; i < size; i++)
		std::cout << array[i] << "\t";
	std::cout << std::endl;
	// std::cout << "comparisons: " << comparisons << std::endl;
	// std::cout << "swaps: \t" << swaps << std::endl;
	// std::cout << __SIZE_MAX__ << std::endl;
	// std::cout << std::numeric_limits<std::streamsize>::max() << std::endl;
	t_tree	*root = makeBST(array, 0, size - 1);
	std::cout << "here\n";
	printTree(root);
	deleteTree(root);
	delete[] array;
}

static t_tree	*makeBST(int *array, int begin, int end)
{
	if (begin > end)
		return nullptr;
	
	int middle = begin + (end - begin) / 2;
	// t_tree	*data = new t_tree;
	t_tree	*data = new t_tree(array[middle]);
	data->value = array[middle];

	data->left = makeBST(array, begin, middle - 1);
	data->right = makeBST(array, middle + 1, end);

	return data;
}