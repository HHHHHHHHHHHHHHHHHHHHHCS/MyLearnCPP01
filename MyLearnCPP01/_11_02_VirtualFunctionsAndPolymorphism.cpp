#include "_11_02_VirtualFunctionsAndPolymorphism.h"
//virtual 父标记了 子可以不用标记  但是为了格式统一建议标记
//析构和构造 不能标记virtual  因为这时候还没有子类 所以找不到目标
//如果返回类型不一样 virtual 不起作用
void _11_02_VirtualFunctionsAndPolymorphism::Test()
{
	Test01();
	Test02();
	Test03();
}

void _11_02_VirtualFunctionsAndPolymorphism::Test01()
{
	Derived derived;
	Base& rBase{derived};
	std::cout << "rBase is a " << rBase.GetName() << '\n';
}

void _11_02_VirtualFunctionsAndPolymorphism::Test02()
{
	D d;
	std::cout << d.GetName() << '\n';
}

void _11_02_VirtualFunctionsAndPolymorphism::Test03()
{
	Cat cat{"Fred"};
	Dog dog{"Garbo"};

	report(cat);
	report(dog);

	Cat fred{"Fred"};
	Cat misty{"Misty"};
	Cat zeke{"Zeke"};

	Dog garbo{"Garbo"};
	Dog pooky{"Pooky"};
	Dog truffle{"Truffle"};

	// Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
	Animal* animals[]{&fred, &garbo, &misty, &pooky, &truffle, &zeke};

	for (const auto* animal : animals)
	{
		//std::cout << animal->getName() << " says " << animal->speak() << '\n';
		report(*animal);
	}
}
