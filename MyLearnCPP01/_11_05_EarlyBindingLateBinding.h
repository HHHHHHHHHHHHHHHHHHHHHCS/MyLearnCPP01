#pragma once

class _11_05_EarlyBindingLateBinding
{
public:
	static int Add(int x, int y)
	{
		return x + y;
	}

	static int Subtract(int x, int y)
	{
		return x - y;
	}

	static int Multiply(int x, int y)
	{
		return x * y;
	}

	static void Test();
	static void Test01();
	static void Test02();
};
