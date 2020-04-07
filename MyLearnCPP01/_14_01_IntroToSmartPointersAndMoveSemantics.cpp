#include "_14_01_IntroToSmartPointersAndMoveSemantics.h"

void _14_01_IntroToSmartPointersAndMoveSemantics::Test()
{
	//Test01();
	//Test02();
	Test03();
}

// std::auto_ptr 已经在C++17被删除了
// 因为很危险 比如说会复制构造函数 和运算符赋值的时候会移动指针 
//	然后我们没有意识到  不小心调用就crash 了
// 还有比如删除动态分配的数组也会导致内存泄漏
// 同时不能很好的处理 其他类    我们有时候要的是复制  他却是移动
// 改用std::unique_ptr或std::shared_ptr  
// c++11之后确切的添加了移动语义  以正确地区分复制与移动


void _14_01_IntroToSmartPointersAndMoveSemantics::Test01()
{
	Auto_ptr1<Resource> ptr{new Resource};

	int x = 0;
	std::cout << "Enter an integer:";
	std::cin >> x;

	if (x == 0)
		return;

	ptr->SayHi();
}


void _14_01_IntroToSmartPointersAndMoveSemantics::Test02()
{
	//第二个是对第一个的浅拷贝  
	//第一个删除的时候  指针已经被删除了  第二个再次执行就crash了
	Auto_ptr1<Resource> ptr{ new Resource };
	Auto_ptr1<Resource> ptr2{ ptr };
}

void _14_01_IntroToSmartPointersAndMoveSemantics::Test03()
{
	//delete nullptr 无所谓

	Auto_ptr2<Resource> res1(new Resource);
	Auto_ptr2<Resource> res2; // Start as nullptr

	std::cout << "res1 is " << (res1.isNull() ? "null\n" : "not null\n");
	std::cout << "res2 is " << (res2.isNull() ? "null\n" : "not null\n");

	res2 = res1; // res2 assumes ownership, res1 is set to null

	std::cout << "Ownership transferred\n";

	std::cout << "res1 is " << (res1.isNull() ? "null\n" : "not null\n");
	std::cout << "res2 is " << (res2.isNull() ? "null\n" : "not null\n");
}
