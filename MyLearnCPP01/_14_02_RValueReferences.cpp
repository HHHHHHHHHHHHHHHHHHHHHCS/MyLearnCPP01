#include "_14_02_RValueReferences.h"
#include <iostream>

void _14_02_RValueReferences::Test()
{
	//Test01();
	//Test02();
	Test03();
}

//命名对象是l值。匿名对象是r值。命名对象或匿名对象的类型与它是l值还是r值无关。
//或者，换句话说，如果r值引用被调用了其他任何东西，那么这种混乱就不存在了。

void _14_02_RValueReferences::Test01()
{
	//l-value分为const 和非 const  会常驻内存
	int x{5};
	int& lref{x}; //l-value 
	//r-value 会在引用结束的时候 销毁
	int&& rref{5}; //r-value
	std::cout << lref << ' ' << rref << '\n';
}

void _14_02_RValueReferences::Test02()
{
	auto&& ref{Fraction{3, 5}};

	//因为使用了临时值(&&), 所以不会复制和创建临时副本
	std::cout << ref << '\n';
}

void _14_02_RValueReferences::Test03()
{
	int x{ 5 };
	Func(x); // l-value argument calls l-value version of function
	const int cx{ 5 };
	Func(cx); // l-value argument calls l-value version of function
	Func(5); // r-value argument calls r-value version of function
}
