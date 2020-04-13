#include "_14_05_StdUniquePtr.h"

void _14_05_StdUniquePtr::Test()
{
	//Test01();
	Test02();
}

void _14_05_StdUniquePtr::Test01()
{
	std::unique_ptr<Res> res1{new Res{}};
	std::unique_ptr<Res> res2{};

	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
	std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");

	res2 = std::move(res1);

	std::cout << "Ownership transferred\n";

	std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
	std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");
}

void _14_05_StdUniquePtr::Test02()
{
	std::unique_ptr<Res> res{new Res{}};
	if (res)
		std::cout << *res;
}
