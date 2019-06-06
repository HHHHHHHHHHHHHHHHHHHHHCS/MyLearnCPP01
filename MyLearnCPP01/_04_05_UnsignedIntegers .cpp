#include "_04_05_Unsigned .h"

void _04_05_UnsignedIntegers::Test()
{
	Overflow();
	Minus();
	int x = -1;
	DoSomething(x);
}

void _04_05_UnsignedIntegers::Overflow()
{
	unsigned short x = 65535;
	std::cout << "x was: " << x << '\n';

	x = x + 1;
	std::cout << "x is now: " << x << '\n';

	x = x + 1;
	std::cout << "x is now: " << x << '\n';

	 x = 0; 
	std::cout << "x was: " << x << std::endl;

	x = x-1;
	std::cout << "x is now: " << x << std::endl;

	x = x-2; 
	std::cout << "x is now: " << x << std::endl;
}

void _04_05_UnsignedIntegers::Minus()
{
	unsigned int x = 3;
	unsigned int y = 5;

	std::cout << x - y << '\n';
}

void _04_05_UnsignedIntegers::DoSomething(unsigned int x)
{
	std::cout << x<<std::endl;
}
