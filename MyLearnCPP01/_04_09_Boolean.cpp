#include "_04_09_Boolean.h"
#include <iostream>

//0-> false  非0->true
void _04_09_Boolean::Test()
{
	bool b1{(bool)4};//有一些不支持 所以要强制转换
	bool b2{false};
	bool b3{0};
	std::cout << b1 << ' ' << b2 << ' ' << b3 << '\n';

	std::cout << IsEquals(1, 2) << '\n';

	int x = 4;

	if (x) 
		std::cout << "hi"<<'\n';
	else
		std::cout << "bye" << '\n';

	bool b{};
	std::cout << "Enter a boolean value: ";
	std::cin >> b;//只能接受 0 1
	std::cout << "You entered: " << b;
}

bool _04_09_Boolean::IsEquals(int x,int y)
{
	return x == y;
}