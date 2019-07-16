#include "_05_12_ForEachLoops.h"
#include <iostream>
#include <vector>
#include <string>
#include <valarray>

void _05_12_ForEachLoops::Test()
{
	//Test01();
	//Test02();
	//Test03();
	int temp[]{ 1, 2, 3, 4, 5, 6 };
	Test04(temp, std::size(temp));
}


void _05_12_ForEachLoops::Test01()
{
	int scores[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	int maxScore = 0;
	for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
	{
		if (scores[i] > maxScore)
		{
			maxScore = scores[i];
		}
	}

	std::cout << maxScore<<'\n';

	int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
	for (int number : fibonacci)
	{
		std::cout << number << ' ';
	}
	std::cout << '\n';

	for (auto number : fibonacci)
	{
		std::cout << number << ' ';
	}
	std::cout << '\n';
}


void _05_12_ForEachLoops::Test02()
{
	int array[5] = {9, 7, 5, 3, 1};
	for (auto element : array) //数组将会复制一次,如果是引用类型可能会直接修改
		element = element * element;
	std::cout << '\n';

	for (auto& element : array) //使用引用会减少复制
		std::cout << element << ' ';
	std::cout << '\n';

	for (const auto& element : array) //让元素只读
		std::cout << element << ' ';
	std::cout << '\n';
}

void _05_12_ForEachLoops::Test03()
{
	std::vector<int> fibonacci = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
	for (const auto& number : fibonacci) //for each 遍历list
		std::cout << number << ' ';
	std::cout << '\n';

	std::string str{"xiaoming"};
	std::cout << str.length() << std::endl;

	for (auto& ch : str) //引用修改
		ch = 'c';

	for (const auto& ch : str) //不能修改的遍历
	{
		//ch = 'b'; //error
		std::cout << ch << ' ';
	}
	std::cout << '\n';
}

void _05_12_ForEachLoops::Test04(int array[],size_t len)
{
	//不能用foreach 遍历动态数组
	/*
	for (const auto& item : array) 
	{
		std::cout << item << ' ';
	}
	std::cout << '\n';
	*/
	for (int i = 0; i < len; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}

