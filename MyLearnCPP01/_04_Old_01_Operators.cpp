#include "_04_Old_01_Operators.h"
#include <iostream>

void _04_Old_01_Operators::Test()
{
	//IncrementDecrement();
	SizeofCommaConditional();
}


void _04_Old_01_Operators::IncrementDecrement()
{
	std::cout << -5 / 3 << ' ' << -5 % 3 << std::endl;

	int x = 5;
	int y = ++x;
	std::cout << x << ' ' << y << std::endl;

	x = 5;
	y = x++;

	std::cout << x << ' ' << y << std::endl;

	x = 5, y = 5;
	std::cout << x << " " << y << '\n';
	std::cout << ++x << " " << --y << '\n'; // prefix
	std::cout << x << " " << y << '\n';
	std::cout << x++ << " " << y-- << '\n'; // postfix
	std::cout << x << " " << y << '\n';


	x = 5;
	int value = Add(x, ++x);
	// is this 5 + 6, or 6 + 6?  It depends on what order your compiler evaluates the function arguments in

	std::cout << value << std::endl; // value could be 11 or 12, depending on how the above line evaluates!

	x = 5;

	value = Add(x, x++);
	// is this 5 + 6, or 6 + 6?  It depends on what order your compiler evaluates the function arguments in

	std::cout << value << std::endl; // value could be 11 or 12, depending on how the above line evaluates!
}

void _04_Old_01_Operators::SizeofCommaConditional()
{
	double d = 5.0;
	std::cout << sizeof(d) << std::endl; // will print the size of variable d in bytes

	int x = 0;
	int y = 2;
	int z = (++x, ++y); // increment x and y
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	z = (x, y);
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	z = x, y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	z = x > y ? x : y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;
}


int _04_Old_01_Operators::Add(int x, int y)
{
	return x + y;
}
