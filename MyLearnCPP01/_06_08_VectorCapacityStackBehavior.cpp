#include "_06_08_VectorCapacityStackBehavior.h"
#include <vector>
#include <iostream>

void _06_08_VectorCapacityStackBehavior::Test()
{
	//Test01();
	Test02();
}


void _06_08_VectorCapacityStackBehavior::Test01()
{
	int* arr = new int[10]{10, 2, 3, 4, 5};

	int len = 0;

	while (*arr)
	{
		//因为剩下的五个没有分配 所以暂时长度是5  所以是错的
		arr++;
		len++;
	}

	std::cout << len << '\n';

	std::vector<int> vec{0, 1, 2};
	std::cout << vec.size() << ' ';
	vec.resize(10);
	std::cout << vec.size() << ' ' << vec.capacity() << '\n';

	for (auto const& element : vec)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n' << std::endl;

	vec.resize(2);
	std::cout << vec.size() << ' ' << vec.capacity() << '\n';
}

void _06_08_VectorCapacityStackBehavior::Test02()
{
	std::vector<int> stack;

	PrintStack(stack);

	stack.push_back(5);
	PrintStack(stack);

	stack.push_back(2);
	PrintStack(stack);

	stack.push_back(1);
	PrintStack(stack);

	stack.pop_back();
	PrintStack(stack);

	stack.push_back(6);
	PrintStack(stack);
}


void _06_08_VectorCapacityStackBehavior::PrintStack(const std::vector<int>& stack)
{
	std::cout << "(size:" << stack.size() << " cap:" << stack.capacity() << ")\n";

	for (const auto& ele : stack)
	{
		std::cout << ele << ' ';
	}
	std::cout << '\n';
}
