#include "_03_06_UsingDebugger.h"

void _03_06_UsingDebugger::Test()
{
	PrintValue(4);
	MuchAdd();
	Testadd();

	A();
	B();
}

void _03_06_UsingDebugger::PrintValue(int value)
{
	std::cout << value;
}

void _03_06_UsingDebugger::MuchAdd()
{
	int x{ 1 };
	std::cout << x << " ";

	x = x + 2;
	std::cout << x << " ";

	x = x + 3;
	std::cout << x << " ";
}

int _03_06_UsingDebugger::Add(int x, int y)
{
	return x + y;
}

void _03_06_UsingDebugger::Testadd()
{
	std::cout << "This function should print: 2 0 0 -2\n";
	std::cout << Add(1, 1) << " ";
	std::cout << Add(-1, 1) << " ";
	std::cout << Add(1, -1) << " ";
	std::cout << Add(-1, -1) << " ";
}

void _03_06_UsingDebugger::A()
{
	std::cout << "a() called\n";
}

void _03_06_UsingDebugger::B()
{
	std::cout << "b() called\n";
	A();
}