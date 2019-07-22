#include "_05_15_Array.h"
#include <array>
#include <iostream>

//array C++11 才支持
void _05_15_Array::Test()
{
	//Test01();
	Test02();
}

void _05_15_Array::Test01()
{
	std::array<int, 5> myArray0;
	myArray0 = {0, 1, 2, 3, 4};
	myArray0 = {9, 8, 7};
	//myArray = { 0,1,2,3,4,5 };//error:超出尺寸大小

	std::cout << myArray0[0] << '\n';

	std::array<int, 5> myArray1{9, 8, 7, 6, 5};
	myArray1.at(1) = 6;
	myArray1.at(9) = 10; //error:越界


	std::array<double, 5> myArray2{9.0, 7.2, 5.4, 3.6, 1.8};
	std::cout << "length:" << myArray2.size() << '\n';


	PrintLength(myArray2);
}

//array 跟数组不一样  不是弱指针
void _05_15_Array::PrintLength(const std::array<double, 5>& myArray)
{
	std::cout << "length: " << myArray.size();
}

void _05_15_Array::Test02()
{
	std::array<int, 5> myArray{7, 3, 1, 9, 5};
	std::sort(myArray.begin(), myArray.end()); //前项排序
	//std::sort(myArray.rbegin(), myArray.rend());//后项排序

	for (const auto& element : myArray)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n';


	//如果用int i  可能会存在不匹配的情况 所以用了std::array<int, 5>::size_type
	//可以用using  代替
	//但是看实现 size_type 是 size_t 的 typedef
	//size_t 是 unsigned __int64   所以可以勉强用int 偶尔存在不匹配
	//所以也可以用
	using index_t = std::array<int, 5>::size_type;
	for (index_t i{0}; i < myArray.size(); i++)
	{
		std::cout << static_cast<size_t>(i) << ' ' << myArray[i] << '|';
	}
	std::cout << '\n';
}
