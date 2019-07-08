#include "_05_08_CStyleStringPtr"
#include <iostream>

void _05_08_CStyleString::Test()
{
	//Test01();
	Test02();
}

void _05_08_CStyleString::Test01()
{
	char myName0[] = "Alex"; // fixed array
	std::cout << myName0;

	//指针的这个Const string 会一直保存在内存中 
	//不然拿到了地址 再去访问 就是空位置了
	const char *myName1 = "Alex"; 
	std::cout << myName1;
}

void _05_08_CStyleString::Test02()
{
	int nArray[5] = { 9, 7, 5, 3, 1 };
	char cArray[] = "Hello!";
	const char *name = "Alex";

	std::cout << nArray << '\n'; 
	std::cout << cArray << '\n'; 
	std::cout << name << '\n'; 

	char c = 'Q';
	std::cout << &c;
}
