#include "_14_05_StdUniquePtr.h"

void _14_05_StdUniquePtr::Test()
{
	//Test01();
	//Test02();
	//Test03();
	//Test04();
	Test05();
	//Test06();
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

void _14_05_StdUniquePtr::Test03()
{
	std::unique_ptr<Fraction> f1{std::make_unique<Fraction>(3, 5)};
	std::cout << *f1 << '\n';

	//使用std::make_unique() 而不是创建std::unique_ptr并使用new yourself
	auto f2{std::make_unique<Fraction[]>(4)};
	std::cout << f2[0] << '\n';
}

void _14_05_StdUniquePtr::Test04()
{
	//按值返回std::unique_ptr。如果未将此值分配给任何对象，则临时返回值将超出范围，并且资源将被清除。
	//如果分配（如在主（）中所示），在C++ 14或更早的时候，将使用移动语义将资源从返回值转移到分配给（在上面的例子中，PTR）的对象中，
	//并且在C++ 17或更新中，返回将被省略。
	//这使得通过std::unique_ptr返回资源比返回原始指针安全得多！
	//一般来说，您不应该通过指针（ever）或引用返回std::unique_ptr（除非您有一个明确的理由返回）。

	std::unique_ptr<Res> ptr{CreateRes()};
	std::cout << *ptr << '\n';
}


void _14_05_StdUniquePtr::Test05()
{
	std::unique_ptr<Res> ptr{std::make_unique<Res>()};
	OutUniquePtr(ptr.get());
	std::cout << "Ending program\n";
}

//您可以使用std::unique_ptr作为class的组内属性。
//这样，就不必担心类析构函数会删除动态内存，
//因为当类对象被销毁时，std::unique_ptr会被自动销毁。
//但是，请注意，如果class是动态分配的，则该对象本身有可能无法正确释放，
//在这种情况下，即使是智能指针也不会有帮助。

void _14_05_StdUniquePtr::Test06()
{
	//不要让多个unique_ptr 管理同一份资源
	//不然结束自动删除的时候 第二个删除会报错
	Res* resA{new Res()};
	std::unique_ptr<Res> res1{resA};
	std::unique_ptr<Res> res2{resA};

	//不要手动删除资源 不然结束自动删除的时候 会报错
	Res* resB{new Res()};
	std::unique_ptr<Res> res3{resB};
	delete resB;
}
