#include "_05_02_CheckInput.h"
#include <iostream>

void _05_02_CheckInput::Test()
{
	double x = GetDouble();
	char op = GetOperator();
	double y = GetDouble();

	PrintResult(x, op, y);
}

double _05_02_CheckInput::GetDouble()
{
	while (true)
	{
		std::cout << "Enter a double value: ";
		double x;
		std::cin >> x;

		if (std::cin.fail()) //是否获取失败
		{
			std::cin.clear(); //清除当前输入缓存
			std::cin.ignore(32767, '\n'); //忽略输入的换行符
			std::cout << "Oops, that input is invalid.  Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char _05_02_CheckInput::GetOperator()
{
	while (true)
	{
		std::cout << "Enter one of the following: +, -, *, or /: ";
		char op;
		std::cin >> op;


		std::cin.ignore(32767, '\n'); //清除换行缓存

		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			std::cout << "Oops, that input is invalid.  Please try again.\n";
	}
}

void _05_02_CheckInput::PrintResult(double x, char op, double y)
{
	if (op == '+')
		std::cout << x << " + " << y << " is " << x + y << '\n';
	else if (op == '-')
		std::cout << x << " - " << y << " is " << x - y << '\n';
	else if (op == '*')
		std::cout << x << " * " << y << " is " << x * y << '\n';
	else if (op == '/')
		std::cout << x << " / " << y << " is " << x / y << '\n';
	else
		std::cout << "Something went wrong: printResult() got an invalid operator.";
}
