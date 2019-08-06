#pragma once

class _06_05_FunctionOverloading
{
public:
	static void Test01();
	static int Add(int x, int y);
	static double Add(double x, double y);
	static void Test02();
	static int GetRandom(int &out);
	static double GetRandom(double &out);
};
