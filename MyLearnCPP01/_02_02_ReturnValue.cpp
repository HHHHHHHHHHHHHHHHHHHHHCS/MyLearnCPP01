#include "_02_02_ReturnValue.h"

//正常Main函数是有int 返回值的 0表示运行成功 非0表示失败
//如果是void 只是隐式返回0

void _02_02_ReturnValue::Test()
{
	ReturnNoThing();
	Calc();
}

void _02_02_ReturnValue::ReturnNoThing()
{
	std::cout << "Return No Thing\n";
	return;
	//std::cout << "After return \n";//can't Print 
}

int _02_02_ReturnValue::GetInputValue()
{
	int x = {0};
	std::cout << "input a int: ";
	std::cin >> x;
	return x;
}

void _02_02_ReturnValue::Calc()
{
	int x = GetInputValue();
	int y = GetInputValue();
	std::cout << x << " + " << y << " = " << x + y << std::endl;
}
