#include "_09_03_Association.h"
#include <iostream>

void _09_03_Association::Test()
{
	Test01();
}

void _09_03_Association::Test01()
{
	Patient* p1 = new Patient{"Dave"};
	Patient* p2 = new Patient{"Frank"};
	Patient* p3 = new Patient{"Betsy"};

	Doctor* d1 = new Doctor("James");
	Doctor* d2 = new Doctor("Scott");


	d1->AddPatient(p1);

	d2->AddPatient(p1);
	d2->AddPatient(p3);

	std::cout << *d1 << '\n';
	std::cout << *d2 << '\n';
	std::cout << *p1 << '\n';
	std::cout << *p2 << '\n';
	std::cout << *p3 << '\n';

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;


}
