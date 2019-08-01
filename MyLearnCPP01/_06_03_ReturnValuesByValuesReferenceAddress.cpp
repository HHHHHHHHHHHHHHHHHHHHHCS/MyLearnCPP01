#include "_06_03_ReturnValuesByValuesReferenceAddress.h"
#include <iostream>

void _06_03_ReturnValuesByValuesReferenceAddress::Test()
{
	Test01();
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
	static int val = value * 2;//加入了static 可以保留生命周期
	return &val;
}

/*
const int& _06_03_ReturnValuesByValuesReferenceAddress::Test01_Func6(int x)
{
	return 5*x;//还是会超出范围
}
*/
