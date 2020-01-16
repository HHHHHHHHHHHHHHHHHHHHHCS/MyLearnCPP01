#include "_11_01_PointersReferencesBaseClass.h"
#include <iostream>
#include <string>


void _11_01_PointersReferencesBaseClass::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _11_01_PointersReferencesBaseClass::Test01()
{
	Derived derived{5};
	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';

	Derived& rDerived{derived};
	std::cout << "rDerived is a " << rDerived.GetName() << " and has value" << rDerived.GetValue() << '\n';

	rDerived.SetValue(10);

	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';

	Derived rDerived1{derived};

	rDerived1.SetValue(20);

	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';


	Derived* pDerived{&derived};
	std::cout << "pDerived is a " << pDerived->GetValueDoubled() << "and has value" << pDerived->GetName() << '\n';
}


void _11_01_PointersReferencesBaseClass::Test02()
{
	Cat cat{"Fred"};
	std::cout << "cat is named " << cat.GetName() << " , and it says " << cat.Speak() << '\n';

	Dog dog{"Garbo"};
	std::cout << "dog is named " << dog.GetName() << " , and it says " << dog.Speak() << '\n';

	Animal* pAnimal{&cat};
	std::cout << "pAnimal is named " << pAnimal->GetName() << " , and it says " << pAnimal->Speak() << '\n';

	pAnimal = &dog;
	std::cout << "pAnimal is named " << pAnimal->GetName() << " , and it says " << pAnimal->Speak() << '\n';
}


void _11_01_PointersReferencesBaseClass::Test03()
{
	Cat fred{"Fred"}, misty{"Misty"}, zeke{"Zeke"};
	Dog garbo{"Garbo"}, pooky{"Pooky"}, truffle{"Truffle"};

	Animal* animals[]{&fred, &garbo, &misty, &pooky, &truffle, &zeke};

	for (const auto anim : animals)
		std::cout << anim->GetName() << " says " << anim->Speak() << '\n';
}
