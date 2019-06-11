#include "_04_13_Const.h"
#include <iostream>

//避免使用#define创建符号常量宏。无法监视
#define MAX_STUDENTS_PER_CLASS 30
#define MAX_NAME_LENGTH 30
//可以这样
constexpr int maxStudentsPerClass{30};
constexpr int maxNameLength{30};

void _04_13_Const::Test()
{
	const int x{99};

	int z;
	std::cin >> z;
	const int zz{z};

	ConstArg(z);

	const int q{3 + 4};
	constexpr int qq{3 * 4};


	const int Max_students{MAX_STUDENTS_PER_CLASS * MAX_NAME_LENGTH};

	const int max_students{maxStudentsPerClass * maxNameLength};

	std::cout << constants::avogadro / constants::pi << std::endl;
}

void _04_13_Const::ConstArg(const int x)
{
	std::cout << x<<std::endl;
}
