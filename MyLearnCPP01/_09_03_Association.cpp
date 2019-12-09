#include "_09_03_Association.h"
#include <iostream>

void _09_03_Association::Test()
{
	//Test01();
	//Test02();
	Test03();
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


void _09_03_Association::Test02()
{
	Course c1{"c1"};
	Course c2{"c2", &c1};
}

_09_03_Association::Car _09_03_Association::CarLot::s_carLot[4] = {{"car0", 0}, {"car1", 1}, {"car2", 2}, {"car3", 3}};

void _09_03_Association::Test03()
{
	Driver driver0{"d0", 0};
	Driver driver1{"d1", 1};
	Driver driver2{"d2", 2};
	Driver driver3{"d3", 3};

	std::cout << CarLot::GetCar(driver2.GetCarID())->GetName();
}
