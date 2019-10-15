#include "_08_06_OverloadingIncrementDecrementOperators.h"
#include <iostream>

void _08_06_OverloadingIncrementDecrementOperators::Test()
{
	Test01();
	Test02();
}

std::ostream& operator<<(std::ostream& out, const class _08_06_OverloadingIncrementDecrementOperators::Digit& d)
{
	out << d.digit;
	return out;
}


_08_06_OverloadingIncrementDecrementOperators::Digit& _08_06_OverloadingIncrementDecrementOperators::Digit::operator++()
{
	if (digit == 9)
	{
		digit = 0;
	}
	else
	{
		++digit;
	}

	return *this;
}

_08_06_OverloadingIncrementDecrementOperators::Digit& _08_06_OverloadingIncrementDecrementOperators::Digit::operator--()
{
	if (digit == 0)
	{
		digit = 9;
	}
	else
	{
		--digit;
	}

	return *this;
}

void _08_06_OverloadingIncrementDecrementOperators::Test01()
{
	Digit d(8);
	std::cout << ++d << '\n';
	std::cout << --d << '\n';
}

//不用引用是因为 会返回临时变量 而有问题
//这意味着后缀 操作 通常效率不如 字首 操作，因为增加了 实例化 临时变量并按值而不是引用返回。
_08_06_OverloadingIncrementDecrementOperators::Digit _08_06_OverloadingIncrementDecrementOperators::Digit::operator
++(int)
{
	Digit temp(digit);

	++(*this);

	return temp;
}

_08_06_OverloadingIncrementDecrementOperators::Digit _08_06_OverloadingIncrementDecrementOperators::Digit::operator
--(int)
{
	Digit temp(digit);

	--(*this);

	return temp;
}


void _08_06_OverloadingIncrementDecrementOperators::Test02()
{
	Digit d(8);
	std::cout << d++ << '\n';
	std::cout << d-- << '\n';
}
