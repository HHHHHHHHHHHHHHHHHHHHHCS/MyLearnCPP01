#pragma once

class _06_07_FunctionPointers
{
public:
	static void Test();
	static void Test01();
	static int Test01_Func1();
	static int Test01_Func2();
	static double Test01_Func3(double val);


	static void Test02();
	static void Test02_SelectionSort(int *array, size_t size,bool(*comparisonFunc)(int,int) = Test02_Ascending);
	static bool Test02_Ascending(int x, int y);
	static bool Test02_Descending(int x, int y);
	static bool Test02_Myscending(int x, int y);
	static void Test02_PrintArray(int *array, size_t size);
};
