#pragma once
#include <functional>
typedef bool (*test03_func2)(int, int);
using test03_func = bool(*)(int, int); //C++11 别名
class _06_07_FunctionPointers
{
public:
	static void Test();
	static void Test01();
	static int Test01_Func1();
	static int Test01_Func2();
	static double Test01_Func3(double val);


	static void Test02();
	static void Test02_SelectionSort(int* array, size_t size, bool (*comparisonFunc)(int, int) = Test02_Ascending);
	static bool Test02_Ascending(int x, int y);
	static bool Test02_Descending(int x, int y);
	static bool Test02_Myscending(int x, int y);
	static void Test02_PrintArray(int* array, size_t size);

	static void Test03();
	static bool Test03_Func1(bool func1(int, int)); //简易写法 这仅适用于功能 参数，而不是独立的函数指针，因此使用有限
	static bool Test03_Func2(test03_func2 func2);
	static bool Test03_Func3(test03_func func3);
	static bool Test03_Func4(std::function<bool(int,int)> func4);//C++11 方法指针

};
