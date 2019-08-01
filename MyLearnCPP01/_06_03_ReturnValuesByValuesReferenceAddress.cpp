#include "_06_03_ReturnValuesByValuesReferenceAddress.h"
#include <iostream>

void _06_03_ReturnValuesByValuesReferenceAddress::Test()
{
	Test01();
	Test02();
}


void _06_03_ReturnValuesByValuesReferenceAddress::Test01()
{
	int x1 = Test01_Func1(1);
	std::cout << x1 << '\n';

	//int* x2 = Test01_Func2(1);
	//std::cout << x2 << '\n';

	//int x3 = Test01_Func3(1);
	//std::cout << x3 << '\n';

	int* x4 = Test01_Func4(5);
	std::cout << x4[0] << '\n';
	delete[] x4;

	int* x5 = Test01_Func5(1);
	std::cout << *x5 << '\n';

	//int x6 = Test01_Func6(1);
	//std::cout << x6 << '\n';
}

int _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func1(int x)
{
	int value = x * 2;
	return value;
}

/*
int* _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func2(int x)
{
	//临时地址的变量报错
	int value = x * 2;
	return &value;
}


int& _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func3(int x)
{
	//临时地址的变量报错
	int value = x * 2;
	return value;
}
*/

int* _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func4(int size)
{
	return new int[size];
}

int* _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func5(int value)
{
	static int val = value * 2; //加入了static 可以保留生命周期
	return &val;
}

/*
const int& _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func6(int x)
{
	return 5*x;//还是会超出范围
}
*/

void _06_03_ReturnValuesByValuesReferenceAddress::Test02()
{
	auto s1 = Test02_Func1();
	std::cout << s1.m_x << '\n';

	std::tuple<int, double> s2 = Test02_Func2();
	std::cout << std::get<0>(s2) << ' ' << std::get<1>(s2) << '\n';

	int a;
	double b;
	std::tie(a, b) = Test02_Func2();
	std::cout << a << ' ' << b << std::endl;

	auto [c, d] = Test02_Func2(); //C++ 17 在设置->语言->C++ 修改到17
	std::cout << c << ' ' << d << '\n';
}

Str _06_03_ReturnValuesByValuesReferenceAddress::Test02_Func1()
{
	Str s{1, 4.5};
	//s.m_x = 1;
	//s.m_y = 4.5;
	return s;
}

std::tuple<int, double> _06_03_ReturnValuesByValuesReferenceAddress::Test02_Func2()
{
	return std::make_tuple(5, 6.7);
}
