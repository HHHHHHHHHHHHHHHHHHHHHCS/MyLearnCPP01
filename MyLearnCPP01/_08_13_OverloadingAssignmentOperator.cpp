#include "_08_13_OverloadingAssignmentOperator.h"

void _08_13_OverloadingAssignmentOperator::Test()
{
	//Test01();
	Test02();
}

void _08_13_OverloadingAssignmentOperator::Test01()
{
	Fraction f(5, 3);
	Fraction tf;
	tf = f;
	std::cout << f;

	Fraction f1(5, 3);
	Fraction f2(7, 2);
	Fraction f3(9, 5);
	f1 = f1;
	f1 = f2 = f3;
}

void _08_13_OverloadingAssignmentOperator::Test02()
{
	MyString alex("Alex", 5);
	MyString employee;
	employee = alex;
	std::cout << employee<<'\n';
	alex = alex;
	std::cout << employee << '\n';

}

void _08_13_OverloadingAssignmentOperator::Test03()
{
	//error
	//NoCopy x = 'x';

	NoCopy xx = 1;

	//error
	//NoCopy tt = xx;

	//error
	//NoCopy qq{ xx };
}
