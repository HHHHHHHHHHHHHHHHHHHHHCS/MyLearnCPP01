#pragma once

class _06_01_PassingArgumentsByReference
{
public:
	static void Test();
	static void Test01();
	static void GetSinCos(double degrees, double& sinOut, double& cosOut);
	static void Test02();
	static void SetNullptr(int*& ptr);
	static void Test03();
	static void ConstRef(const int& x);
	static void Test04();
	static void PrintElements(int (&arr)[5]);
};
