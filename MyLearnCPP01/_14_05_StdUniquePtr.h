#pragma once
#include <iostream>

class _14_05_StdUniquePtr
{
public:
	class Res
	{
	public:
		Res() { std::cout << "Res acquired\n"; }
		~Res() { std::cout << "Res destroyed\n"; }
		friend std::ostream& operator<<(std::ostream& out,const Res &res)
		{
			(void*)&res;
			out << "I am a res\n";
			return out;
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
};
