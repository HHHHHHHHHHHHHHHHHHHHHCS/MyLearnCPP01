#include "_10_01_BasicInheritance.h"

void _10_01_BasicInheritance::Test()
{
	Employee frank(20.25, 12345);
	frank.m_name = "Frank"; // we can do this because m_name is public

	frank.PrintNameAndSalary();
}
