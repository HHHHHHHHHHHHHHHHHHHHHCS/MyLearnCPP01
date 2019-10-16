#include "_08_08_OverloadingParenthesisOperator.h"
#include <iostream>

void _08_08_OverloadingParenthesisOperator::Test()
{
	Test01();
	Test02();
	Test03();
}

void _08_08_OverloadingParenthesisOperator::Test01()
{
	Matrix matrix;
	matrix(1, 2) = 4.5;
	std::cout << matrix(1, 2) << '\n';
}


void _08_08_OverloadingParenthesisOperator::Test02()
{
	Matrix matrix;
	matrix(1, 2) = 4.5;
	matrix(); // erase matrix
	std::cout << matrix(1, 2) << '\n';
}

void _08_08_OverloadingParenthesisOperator::Test03()
{
	Matrix matrix;
	std::cout << matrix(4.5) << '\n';
}
