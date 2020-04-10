#pragma once

class _14_04_StdMove
{
public:
	static void Test();

	template <class T>
	static void MySwap1(T& a, T& b)
	{
		T tmp{a}; //执行一次复制
		a = b; //执行一次复制
		b = tmp; //执行一次复制
	}

	static void Test01();


	template <class T>
	static void MySwap2(T& a, T& b)
	{
		T tmp{std::move(a)}; //执行一次移动
		a = std::move(b); //执行一次移动
		b = std::move(tmp); //执行一次移动
	}

	static void Test02();
	static void Test03();
};
