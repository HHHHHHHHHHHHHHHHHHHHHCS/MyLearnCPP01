#pragma once
#include <ostream>

class _08_06_OverloadingIncrementDecrementOperators
{
public:
	class  Digit
	{
	private:
		int digit;
	public:
		Digit(int _d = 0)
			:digit(_d)
		{
			
		}

		Digit& operator++();
		Digit& operator--();
		Digit operator++(int);
		Digit operator--(int);


		friend  std::ostream& operator<<(std::ostream &out, const Digit &d);
	};

	static void Test();
	static void Test01();
	static void Test02();
};
