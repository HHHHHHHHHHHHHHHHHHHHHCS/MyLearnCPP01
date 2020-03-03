#include "_11_05_EarlyBindingLateBinding.h"
#include <iostream>

void _11_05_EarlyBindingLateBinding::Test()
{
	//Test01();
	Test02();
}

void _11_05_EarlyBindingLateBinding::Test01()
{
	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;

	int y;
	std::cout << "Enter another number: ";
	std::cin >> y;

	int op;
	do
	{
		std::cout << "Enter an operation (0=add, 1=subtract, 2=multiply): ";
		std::cin >> op;
	}
	while (op < 0 || op > 2);

	int result = 0;
	switch (op)
	{
		// call the target function directly using early binding
	case 0: result = Add(x, y);
		break;
	case 1: result = Subtract(x, y);
		break;
	case 2: result = Multiply(x, y);
		break;
	default:break;
	}

	std::cout << "The answer is: " << result << std::endl;
}

void _11_05_EarlyBindingLateBinding::Test02()
{
	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;

	int y;
	std::cout << "Enter another number: ";
	std::cin >> y;

	int op;
	do
	{
		std::cout << "Enter an operation (0=add, 1=subtract, 2=multiply): ";
		std::cin >> op;
	}
	while (op < 0 || op > 2);

	// Create a function pointer named pFcn (yes, the syntax is ugly)
	int (*pFunc)(int, int) = nullptr;

	switch (op)
	{
	case 0:pFunc = Add;
		break;
	case 1:pFunc = Subtract;
		break;
	case 2:pFunc = Multiply;
		break;
	default:break;

	}

	std::cout << "This answer is: " << pFunc(x, y) << std::endl;
}
