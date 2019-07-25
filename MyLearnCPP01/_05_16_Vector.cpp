#include "_05_16_Vector.h"
#include <vector>
#include <iostream>

//C++ 03 才加进去的

void _05_16_Vector::Test()
{
	Test01();
	Test02();
}

void _05_16_Vector::Test01()
{
	std::vector<int> array;
	std::vector<int> array2 = {9, 7, 5, 3, 1};
	std::vector<int> array3{9, 7, 5, 3, 1}; // C++11

	//array[6] = 2; //虽然能通过 但是越界  直接终止
	//array.at(7) = 3; //虽然能通过 但是越界 会有异常提示

	std::cout << &array << ' ' << array2[2] << '\n';

	//C++11
	array3 = {0, 1, 2, 3, 4, 5};

	std::cout << array3.size() << '\n';

	array3.resize(10); // set size to 5

	std::cout << "The length is: " << array.size() << '\n';

	for (auto const& element : array3)
		std::cout << element << ' ';

	array3.resize(3); // set size to 5

	std::cout << "The length is: " << array.size() << '\n';

	for (auto const& element : array3)
		std::cout << element << ' ';
}

void _05_16_Vector::Test02()
{
	//会把bool 压缩成字节  true=1  false=0
	std::vector<bool> array{ true, false, false, true, true };
	std::cout << "The length is: " << array.size() << '\n';

	for (auto const &element : array)
		std::cout << element << ' ';
}
