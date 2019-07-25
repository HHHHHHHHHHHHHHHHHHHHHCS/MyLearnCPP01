#include "_06_01_PassingArgumentsByReference.h"
#include <cmath> //sin cos
#include <iostream>

void _06_01_PassingArgumentsByReference::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
}

void _06_01_PassingArgumentsByReference::Test01()
{
	double sin(0.0);
	double cos{0.0};

	GetSinCos(30.0, sin, cos);

	std::cout << sin << ' ' << cos << '\n';
}

void _06_01_PassingArgumentsByReference::GetSinCos(double degrees, double& sinOut, double& cosOut)
{
	static constexpr double pi{3.1415926}; //constexpr 是常量表达式
	double radians = degrees * pi / 180.0;
	sinOut = std::sin(radians);
	cosOut = std::cos(radians);
}

void _06_01_PassingArgumentsByReference::Test02()
{
	int x = 5;
	int* ptr = &x;
	std::cout << "ptr is " << (ptr ? "non-null" : "null") << '\n';
	SetNullptr(ptr);
	std::cout << "ptr is " << (ptr ? "non-null" : "null") << '\n';
}

//如果没有& 则不为引用 关系 置空无效
void _06_01_PassingArgumentsByReference::SetNullptr(int*& ptr)
{
	ptr = nullptr;
}

void _06_01_PassingArgumentsByReference::Test03()
{
	ConstRef(5);
}

void _06_01_PassingArgumentsByReference::ConstRef(const int& x)
{
	//x = 5;//error const 不能修改
	std::cout << x << '\n';
}

void _06_01_PassingArgumentsByReference::Test04()
{
	int arr[]{1, 2, 3, 4, 5};
	PrintElements(arr);
}

//这里是要写数量的 , 不然会出错     或者有可能出现弱地址引用
//后面可以用模版代替
void _06_01_PassingArgumentsByReference::PrintElements(int (& arr)[5])
{
	int length{sizeof(arr) / sizeof(arr[0])};
	std::cout << length << '\n';
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
