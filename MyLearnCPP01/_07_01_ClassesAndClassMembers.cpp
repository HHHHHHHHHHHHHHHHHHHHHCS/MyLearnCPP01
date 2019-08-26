#include "_07_01_ClassesAndClassMembers.h"
#include <iostream>

void _07_01_ClassesAndClassMembers::Test()
{
	//Test01();
	Test02();
}

void _07_01_ClassesAndClassMembers::Test01()
{
	DateStruct today{2020, 10, 14};
	Print(today);
	today.day = 30;
	Print(today);
}

void _07_01_ClassesAndClassMembers::Test02()
{
	_07_01_ClassesAndClassMembers_Class today{ 2020, 10, 14 };
	today.Print();
	today.day = 30;
	today.Print();
}

void _07_01_ClassesAndClassMembers::Print(DateStruct& date)
{
	std::cout << date.year << '/' << date.month << '/' << date.day << '\n';
}

void _07_01_ClassesAndClassMembers::_07_01_ClassesAndClassMembers_Class::Print() const
{
	std::cout << year << '/' << month << '/' << day << '\n';
}

