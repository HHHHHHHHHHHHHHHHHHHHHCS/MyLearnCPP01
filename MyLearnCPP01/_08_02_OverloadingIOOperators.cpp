#include "_08_02_OverloadingIOOperators.h"

void _08_02_OverloadingIOOperators::Test()
{
	Test01();
}

void _08_02_OverloadingIOOperators::Test01()
{
	Point p1(3, 4, 5);
	p1.Print();

	Point p2(4, 5, 6);
	std::cout << p1 << '\n' << p2 << std::endl;

	Point p3;
	std::cin >> p3;

	std::cout << p3<<std::endl;
}
