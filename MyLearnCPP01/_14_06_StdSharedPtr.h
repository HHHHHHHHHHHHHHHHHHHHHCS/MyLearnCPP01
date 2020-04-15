#pragma once
#include <iostream>

class _14_06_StdSharedPtr
{
public:
	class Resource
	{
	public:
		Resource() { std::cout << "Resource acquired\n"; }
		~Resource() { std::cout << "Resource destroyed\n"; }
	};
	static void Test();
	static void Test01();
	static void Test02();
};
