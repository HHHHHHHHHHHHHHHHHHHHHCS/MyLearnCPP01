#include "_02_06_WhitespaceFormatting.h"

void _02_06_WhitespaceFormatting::Test()
{
	Print();
}


void _02_06_WhitespaceFormatting::Print()
{
	/*
	std::cout << "Hello
		world!"; // Not allowed!
	*/

	//这里可以用 换行拼接
	std::cout << "Hello"
		"World"<<std::endl;
}
