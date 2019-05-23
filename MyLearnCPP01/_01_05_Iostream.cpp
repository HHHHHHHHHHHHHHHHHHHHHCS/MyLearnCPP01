#include  "_01_05_Iostream.h"

void _01_05_Iostream::Test()
{
	Print();
	EndOrN();
	Input();
}

void _01_05_Iostream::Print()
{
	std::cout << "10";
	int x = 10;
	std::cout << "X is " << x << std::endl;
}

/*
 * \n效率比endl效率好
 * \n只是移动了光标
 * 而endl换行并且进行了一次输出
 */
void _01_05_Iostream::EndOrN()
{
	std::cout << "xxxxx" << std::endl;
	std::cout << "xxxx\n";
}

void _01_05_Iostream::Input()
{
	std::cout << "Enter number";
	int x{};//无论如何都要自己赋值一个初始值 避免BUG
	std::cin >> x;
	std::cout << "You entered" << x << '\n';
}
