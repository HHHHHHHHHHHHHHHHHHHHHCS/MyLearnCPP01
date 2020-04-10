#include "_14_04_StdMove.h"
#include <string>
#include <iostream>
#include <vector>

void _14_04_StdMove::Test()
{
	// Test01();
	// Test02();
	Test03();
}

//std::move 在排序的时候也很有用 减少复制
//为了调用移动语义而不是复制语义，只要我们想将l值当作r值来处理，
//  就可以使用std::move。

void _14_04_StdMove::Test01()
{
	//普通的swap 执行了三次复制
	std::string x{"abc"};
	std::string y{"de"};

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	MySwap1(x, y);

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

void _14_04_StdMove::Test02()
{
	//移动指针的swap 执行了三次移动
	std::string x{"abc"};
	std::string y{"de"};

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	MySwap2(x, y);

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

void _14_04_StdMove::Test03()
{
	std::vector<std::string> v;
	std::string str = "Knock";

	std::cout << "Copying str\n";
	//因为这时候str 是拷贝出来的
	v.push_back(str); // calls l-value version of push_back, which copies str into the array element

	std::cout << "str: " << str << '\n';
	std::cout << "vector: " << v[0] << '\n';

	std::cout << "\nMoving str\n";

	//这里用移动指针 减少一次拷贝
	v.push_back(std::move(str)); // calls r-value version of push_back, which moves str into the array element

	std::cout << "str: " << str << '\n';
	std::cout << "vector:" << v[0] << ' ' << v[1] << '\n';
}
