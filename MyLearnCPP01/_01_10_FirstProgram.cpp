#include "_01_10_FirstProgram.h"

void _01_10_FirstProgram::Test()
{
	NotGoodSolution();
	MostlyGoodSolution();
	PreferredSolution();
	Question1();
}

void _01_10_FirstProgram::NotGoodSolution()
{
	std::cout << "Enter an integer:";

	int num{0};
	std::cin >> num;

	num *= 2;

	std::cout << "Double that number is :" << num << '\n';
}

void _01_10_FirstProgram::MostlyGoodSolution()
{
	std::cout << "Enter an integer:";

	int num{0};
	std::cin >> num;

	int doubleNum{num * 2};

	std::cout << "Double that number is :" << doubleNum << '\n';
}

void _01_10_FirstProgram::PreferredSolution()
{
	std::cout << "Enter an integer:";

	int num{0};
	std::cin >> num;

	std::cout << "Double that number is :" << num * 2 << '\n';
}

void _01_10_FirstProgram::Question1()
{
	std::cout << "Enter an integer:";

	int num{0};
	std::cin >> num;

	int doubleNum{num * 2}, tripleNum{num * 3};

	std::cout << "Double " << num << " number is :" << doubleNum << '\n';
	std::cout << "Double " << num << " number is :" << tripleNum << '\n';
}
