#include "_07_15_AnonymousObjects.h"
void _07_15_AnonymousObjects::Test()
{
	Test01();
	Test02();
}

void _07_15_AnonymousObjects::Test01()
{
	Cents cents(6);
	Print(cents);
	Print(Cents(8));

}


void _07_15_AnonymousObjects::Test02()
{
	Cents cents1(6);
	Cents cents2(8);
	Cents sum = Add(cents1, cents2);
	std::cout << "I have "<<sum.GetCents()<<" Cents."<<std::endl;

	std::cout << "I have " << Add(Cents(6),Cents(8)).GetCents() << " Cents." << std::endl;

}

