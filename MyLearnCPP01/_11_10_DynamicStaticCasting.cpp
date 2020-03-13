#include "_11_10_DynamicStaticCasting.h"
#include <iostream>
//除非进行向下转换，否则请使用static_cast
//  在这种情况下，dynamic_cast通常是更好的选择。
//但是，您还应该考虑完全避免转换，而仅使用虚函数。

//dynamic_casting 用了 Run-time type information (RTTI)即运行类型信息
//因此效率会低下
//如果一些编辑器 关闭了RTTI 则会 编译失败

void _11_10_DynamicStaticCasting::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _11_10_DynamicStaticCasting::Test01()
{
	//如果基类没有写virtual函数 则可以用dynamic_cast
	//dynamic_cast 通常用于向下转换
	//转换的时候会进行安全检测  所以会浪费一定的性能
	Base* b = GetObject(true);
	std::cout << dynamic_cast<Derived*>(b)->GetName() << '\n';
	delete b;

	/*
	 *  如果转换失败 则d 为空指针
	 * 转换失败的几种可能
	 * 1.)继承用的是private or protect
	 * 2.)未申明或继承任何虚拟函数(虚拟表是空的)
	 * 3.)一些特定的情况下的基类,如下面的复杂继承
	 *	https://docs.microsoft.com/en-us/cpp/cpp/dynamic-cast-operator?redirectedfrom=MSDN&view=vs-2019
	 */
	Base* nullB = GetObject(false);
	Derived* d = dynamic_cast<Derived*>(nullB);
	if (d)
	{
		std::cout << d->GetName() << '\n';
	}

	delete nullB;
}

void _11_10_DynamicStaticCasting::Test02()
{
	//dynamic_cast 也可以用于引用
	Derived apple(1, "Apple"); 
	Base& b = apple; //赋值
	Derived& d = dynamic_cast<Derived&>(b);//把引用的内容进行转换 而不是指针 

	std::cout << "The name of the Derived is: " << d.GetName() << '\n'; 

}


void _11_10_DynamicStaticCasting::Test03()
{
	//dynamic_cast 有时候也可以用 static_cast 答题
	//但是 static_cast 没有安全检测  
	//所以 效率更快 就算指针转换失败  也会返回成功
	//  不过调用的时候会提示未定义
	//所以 如果是向下转换 存在安全问题 不建议 使用
	Base* b = GetObject(true);
	std::cout << static_cast<Derived*>(b)->GetName() << '\n';
	delete b;

	//但是可以自己添加标记 确保类的安全
	Base* b0 = GetObject(true);

	if (b0->type == TheDerived)
	{
		// We already proved b is pointing to a Derived object, so this should always succeed
		Derived* d = static_cast<Derived*>(b0);
		std::cout << "The name of the Derived is: " << d->GetName() << '\n';
	}
}
