#include "_11_09_ObjectSlicing.h"
#include <iostream>
#include <vector>

//确保您的函数参数是引用（或指针），
//并在涉及派生类时尽量避免传递任何值。

void _11_09_ObjectSlicing::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
}

void _11_09_ObjectSlicing::Test01()
{
	Derived d{5};
	std::cout << "d:" << d.getName() << " " << d.getValue() << std::endl;
	Base& ref{d};
	std::cout << "ref:" << ref.getName() << " " << ref.getValue() << std::endl;
	Base* ptr{&d};
	std::cout << "ptr:" << ptr->getName() << " " << ptr->getValue() << '\n';
}

void _11_09_ObjectSlicing::Test02()
{
	Derived d{5};
	//因为不是引用 所以强制变成基类了 
	//类似于new 一个基类  把派生类属性赋值过去
	Base base{d};
	std::cout << "base is a " << base.getName() << " and has value " << base.getValue() << '\n';
	PrintName(d);


	//可以用过引用 转换
	RefPrintName(d);
}

void _11_09_ObjectSlicing::Test03()
{
	std::vector<Base> v{};
	v.push_back(Base{5});
	v.push_back(Derived{6});

	for (const auto& e : v)
	{
		std::cout << e.getName() << ' ' << e.getValue() << '\n';
	}

	//-------------

	std::vector<Base*> v1{};
	Base b{5}; // b and d can't be anonymous objects
	Derived d{6};

	v1.push_back(&b); // add a Base object to our vector
	v1.push_back(&d); // add a Derived object to our vector
	for (const auto& e : v1)
	{
		std::cout << e->getName() << ' ' << e->getValue() << '\n';
	}

	//---------


	//1.reference_wrapper 需要头文件<header>
	//2.reference_wrapper 不能用匿名对象
	//3.reference_wrapper 获取要用.get()
	std::vector<std::reference_wrapper<Base>> v2{};
	//两个back 一样的
	v2.emplace_back(b);
	v2.emplace_back(d);
	v2.push_back(b);
	v2.push_back(d);

	for (const auto& e : v2)
	{
		std::cout << e.get().getName() << " " << e.get().getValue() << '\n';
	}
}

void _11_09_ObjectSlicing::Test04()
{
	//因为b 是基类指针 
	//第一次初始化 指向 d2
	//第二次  是执行赋值  把  d1赋值给d2 
	//	但是因为是基类所以只把基类属性赋值过去
	//  所以避免指针赋值 值
	Derived d1{5};
	d1.v = 9;
	Derived d2{6};
	d2.v = 10;
	Base& b{d2};

	b = d1; // this line is problematic
	std::cout << d1.getValue() << ' ' << d1.v << '\n';
	std::cout << d2.getValue() << ' ' << d2.v << '\n';
}
