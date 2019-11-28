#include "_08_12_ConvertingConstructorsExplicitDelete.h"

void _08_12_ConvertingConstructorsExplicitDelete::Test()
{
	Test01();
}

void _08_12_ConvertingConstructorsExplicitDelete::Test01()
{
	MyString yy{'y'};
	MyString sss{"sss"};
	MyString dd{12.0f};

	//explicit可以阻止隐式转换 
	MyString mine = 'x';
	std::cout << mine;
	//因为有一样的构造函数   所以可以转换
	PrintString(4);

	//C++11 可以添加 构造函数 delete 也可以阻止
}
