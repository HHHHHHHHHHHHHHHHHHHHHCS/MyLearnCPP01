#pragma once
#include <stddef.h>

class _05_06_NullPointers
{
public:
	static void Test();
	static void Test01();
	static void print(int x);
	static void print(int* x);
	static void doSomething(std::nullptr_t ptr);
};
