#pragma once
#include <iostream>
#include <string>

class _07_08_OverlappingAndDelegatingConstructors
{
public:
	static void Test();
	static void Test01();
	static void Test02();

	class Cls01
	{
	public:
		Cls01()
		{
			std::cout << "None Args" << std::endl;
		}

		//预先执行要C++11才行
		Cls01(std::string str): Cls01()
		{
			//预先执行好比把代码放在了 方法的最前面
			//Cls01();
			std::cout << "String Args:" << str << std::endl;
		}

		Cls01(int i) : Cls01("")
		{
			//Cls01("");
			std::cout << "int Args:" << i << std::endl;
		}
	};

	class Cls02
	{
	public:
		Cls02(int a, int b)
		{
			std::cout << a << '+' << b << '=' << a + b << std::endl;
		}

		Cls02(int a) : Cls02(a, 0)
		{
		}

		Cls02() : Cls02(0, 0)
		{
		}
	};
};
