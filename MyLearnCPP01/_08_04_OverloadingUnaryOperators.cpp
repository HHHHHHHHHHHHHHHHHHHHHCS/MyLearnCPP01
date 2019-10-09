#include "_08_04_OverloadingUnaryOperators.h"
#include <cmath>
#include <iostream>

void _08_04_OverloadingUnaryOperators::Test()
{
	Test01();
	Test02();
	Test03();
}

_08_04_OverloadingUnaryOperators::Point _08_04_OverloadingUnaryOperators::Point::operator+() const
{
	return Point{abs(x), abs(y), abs(z)};
}


void _08_04_OverloadingUnaryOperators::Test01()
{
	Point p{3, -2, 5};
	std::cout << (+p).GetY() << '\n';
}

_08_04_OverloadingUnaryOperators::Point _08_04_OverloadingUnaryOperators::Point::operator-() const
{
	return Point{-x, -y, -z};
}


void _08_04_OverloadingUnaryOperators::Test02()
{
	Point p{3, -2, 5};
	std::cout << (-p).GetY() << '\n';
}

bool _08_04_OverloadingUnaryOperators::Point::operator!() const
{
	return (x == 0.0 && y == 0.0 && z == 0.0);
}


void _08_04_OverloadingUnaryOperators::Test03()
{
	Point point;

	if (!point)
		std::cout << "point is set at the origin.\n";
	else
		std::cout << "point is not set at the origin.\n";
}
