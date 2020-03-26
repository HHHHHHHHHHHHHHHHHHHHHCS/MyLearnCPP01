#include "_12_08_PartialTemplateSpecializationPointers.h"

void _12_08_PartialTemplateSpecializationPointers::Test()
{
	Test01();
}

//指针普通的赋值会出问题 浅拷贝指针分配
//所以指针需要一次专门的拷贝
void _12_08_PartialTemplateSpecializationPointers::Test01()
{
	_12_08_PartialTemplateSpecializationPointers_Storage<int> myint(5);
	myint.Print();

	int x = 7;
	_12_08_PartialTemplateSpecializationPointers_Storage<int*> myintptr(&x);
	x = 9;
	myintptr.Print();

	// Dynamically allocate a temporary string
	char* name = new char[40]{"Alex"}; // requires C++14

	// If your compiler isn't C++14 compatible, comment out the above line and uncomment these
	//	char *name = new char[40];
	//	strcpy(name, "Alex");

	// Store the name
	_12_08_PartialTemplateSpecializationPointers_Storage<char*> myname(name);
	// Delete the temporary string
	delete[] name;
	myname.Print();
}
