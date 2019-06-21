#include "_04_S_03_Structs.h"
#include <iostream>

struct Employee
{
	short id;
	int age;
	double wage;
};

struct Company
{
	Employee CEO; // Employee is a struct within the Company struct
	int numberOfEmployees;
};


void _04_S_03_Structs::Test()
{
	Employee joe1; // create an Employee struct for Joe
	joe1.id = 14; // assign a value to member id within struct joe
	joe1.age = 32; // assign a value to member age within struct joe
	joe1.wage = 24.15; // assign a value to member wage within struct joe

	Employee frank1; // create an Employee struct for Frank
	frank1.id = 15; // assign a value to member id within struct frank
	frank1.age = 28; // assign a value to member age within struct frank
	frank1.wage = 18.27; // assign a value to member wage within struct frank

	Employee joe2 = { 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
	Employee frank2 = { 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)

	Employee joe3{ 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
	Employee frank3{ 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)

	Company myCompany = { { 1, 42, 60000.0f }, 5 };

	std::cout << "The size of Employee is " << sizeof(Employee) << "\n";
	std::cout << "The size of Employee is " << sizeof(Company) << "\n";
}
