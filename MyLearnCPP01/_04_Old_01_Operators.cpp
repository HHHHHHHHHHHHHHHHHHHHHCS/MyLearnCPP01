#include "_04_Old_01_Operators.h"
#include <iostream>

void _04_Old_01_Operators::Test()
{
	//IncrementDecrement();
	//SizeofCommaConditional();
	//RelationalOperators();
	//LogicalOperators();
	BitwiseOperators();
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

	x = 0, y = 2;

	z = (x, y);
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	z = x, y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	z = x > y ? x : y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	std::cout << ((x > y) ? x : y) << std::endl;
	//因为 << 运算符的优先级高于？：运算符
	std::cout << (x > y) ? x : y;
	//就会变成这样
	(std::cout << (x > y)) ? x : y;
}

void _04_Old_01_Operators::RelationalOperators()
{
	double d1(100 - 99.99); // should equal 0.01
	double d2(10 - 9.99); // should equal 0.01

	if (d1 == d2)
		std::cout << "d1 == d2" << "\n";
	else if (d1 > d2)
		std::cout << "d1 > d2" << "\n";
	else if (d1 < d2)
		std::cout << "d1 < d2" << "\n";

	std::cout << ApproximatelyEqualAbsRel(d1, d2, 1e-8, 1e-4) << '\n';

	double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	std::cout << ApproximatelyEqualAbsRel(d1, d2) << "\n";


	std::cout << ApproximatelyEqualAbsRel(a - 1.0, 0.0, 1e-12, 1e-8) << "\n"; // compare "almost 0.0" to 0.0
}

bool _04_Old_01_Operators::ApproximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	// Check if the numbers are really close -- needed when comparing numbers near zero.
	double diff = fabs(a - b);
	if (diff <= absEpsilon)
		return true;

	// Otherwise fall back to Knuth's algorithm
	return diff <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int _04_Old_01_Operators::Add(int x, int y)
{
	return x + y;
}


void _04_Old_01_Operators::LogicalOperators()
{
	int x = 5;
	int y = 7;

	if (!x == y)
		std::cout << "x does not equal y";
	else
		std::cout << "x equals y";

	std::cout << '\n';

	if (!(x == y))
		std::cout << "x does not equal y";
	else
		std::cout << "x equals y";

	std::cout << '\n';

	std::cout << "Enter a number: ";
	int value;
	std::cin >> value;

	if (value == 0 || value == 1)
		std::cout << "You picked 0 or 1" << std::endl;
	else
		std::cout << "You did not pick 0 or 1" << std::endl;

	std::cout << '\n';
}

void _04_Old_01_Operators::BitwiseOperators()
{
	//3 = 0011
	//3 << 1 = 0110 = 6
	//3 << 2 = 1100 = 12
	//3 << 3 = 1000 = 8
	//12 = 1100
	//12 >> 1 = 0110 = 6
	//12 >> 2 = 0011 = 3
	//12 >> 3 = 0001 = 1
	std::cout << sizeof(2048)<<' '<<sizeof(true)<<std::endl;

	int x = 4;
	std::cout << x<<std::endl;
	x = x << 1;
	std::cout << x<<std::endl;
}
