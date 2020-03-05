#include "_11_07_PureVirtualAndAbstractAndInterface.h"
#include <iostream>

void _11_07_PureVirtualAndAbstractAndInterface::Test()
{
	Test01();
	Test02();
}

const char* _11_07_PureVirtualAndAbstractAndInterface::Animal::Speak()
{
	return "???";
}

void _11_07_PureVirtualAndAbstractAndInterface::Test01()
{
	//有纯虚拟函数  不能实例化
	//Base b{};

	//有纯虚拟函数  不能实例化
	//Animal anim;

	Cat cat{"cat"};
	Dog dog{"dog"};
	//因为base 有纯虚拟所以不能实例化
	//Base *c = cat;

	std::cout << cat.Speak() << '\n' << dog.Speak() << '\n';
}


void _11_07_PureVirtualAndAbstractAndInterface::Test02()
{
	OneLog one{};
	TwoLog two{};
	OpenLog(-2, one);
	OpenLog(-2, two);
}
