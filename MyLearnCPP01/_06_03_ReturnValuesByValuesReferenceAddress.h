#pragma once
#include <tuple>

struct Str
{
	int m_x;
	double m_y;
};

class _06_03_ReturnValuesByValuesReferenceAddress
{
public:
	static void Test();
	static void Test01();
	static int Test01_Func1(int x);
	static int* Test01_Func2(int x);
	static int& Test01_Func3(int x);
	static int* Test01_Func4(int size);
	static int* Test01_Func5(int value);
	static const int& Test01_Func6(int x);

	static void Test02();
	static Str Test02_Func1();
	static std::tuple<int, double> Test02_Func2();
};
