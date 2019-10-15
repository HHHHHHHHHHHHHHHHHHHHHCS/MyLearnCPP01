#pragma once
#include <cassert>
#include <string>
#include <iostream>

class _08_07_OverloadingSubscriptOperator
{
public:
	class IntList
	{
	private:
		int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};;
	public:
		void SetItem(int index, int value) { list[index] = value; }
		int GetItem(int index) { return list[index]; }
		int* GetList() { return list; }

		int& operator[](int index)
		{
			assert(index >= 0 && index < 10);
			return list[index];
		}

		const int& operator[](int index) const
		{
			assert(index >= 0 && index < 10);
			return list[index];
		}
	};

	class Stupid
	{
	private:
	public:
		void operator[](std::string index)
		{
			std::cout << index << '\n';
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
};
