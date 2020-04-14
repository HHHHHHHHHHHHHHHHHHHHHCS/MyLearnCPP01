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

		friend std::ostream& operator<<(std::ostream& out, const Res& res)
		{
			(void*)&res;
			out << "I am a res\n";
			return out;
		}
	};

	static void Test();
	static void Test01();
	static void Test02();

	class Fraction
	{
	private:
		int numerator{0};
		int denominator{1};

	public:
		Fraction(int _n = 0, int _d = 1)
			: numerator(_n), denominator(_d)
		{
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
		{
			out << f1.numerator << "/" << f1.denominator << '\n';
			return out;
		}
	};

	static void Test03();

	static std::unique_ptr<Res> CreateRes()
	{
		return std::make_unique<Res>();
	}

	static void Test04();

	static void OutUniquePtr(Res *res)
	{
		if (res)
		{
			std::cout << *res << '\n';
		}
	}

	static void Test05();

	static void Test06();

};
