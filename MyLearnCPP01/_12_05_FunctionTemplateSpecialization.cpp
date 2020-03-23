#include "_12_05_FunctionTemplateSpecialization.h"
void _12_05_FunctionTemplateSpecialization::Test()
{
	//Test01();
	Test02();
}

void _12_05_FunctionTemplateSpecialization::Test01()
{
	//模版特定化 可以为某个具体的方法做特定的行为

	// Define some storage units
	_12_05_FunctionTemplateSpecialization_Storage<int> nValue(5);
	_12_05_FunctionTemplateSpecialization_Storage<double> dValue(6.7);

	// Print out some values
	nValue.Print();
	dValue.Print();
}

void _12_05_FunctionTemplateSpecialization::Test02()
{
	//const_cast 去掉const  转换用
	char* string = const_cast<char*>("chifan");
	_12_05_FunctionTemplateSpecialization_Storage<char*> storage(string);
	//指针的[XX]值放在文字常量常用区  无法改变 
	//所以这里用这个方法改变整个指针
	string = const_cast<char*>("shuijiao");
	storage.Print();
}
