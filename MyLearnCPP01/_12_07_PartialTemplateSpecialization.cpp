#include "_12_07_PartialTemplateSpecialization.h"

void _12_07_PartialTemplateSpecialization::Test()
{
	Test01();
	Test02();
	Test03();
}

//建议使用子类重写

//外部模版重写的方法
void _12_07_PartialTemplateSpecialization::Test01()
{
	_12_07_PartialTemplateSpecialization_StaticArray<int, 4> int4{};
	for (int i = 0; i < 4; i++)
	{
		int4[i] = i * i;
	}

	_12_07_PartialTemplateSpecialization_Print(int4);


	_12_07_PartialTemplateSpecialization_StaticArray<char, 14> char14{};

	const char* str = "Hello, world!";
	int len = static_cast<int>(strlen(str)) + 1;
	strcpy_s(char14.GetArray(), len, str);

	// Print the array
	_12_07_PartialTemplateSpecialization_Print(char14);
}

//内部模版重写的方法
void _12_07_PartialTemplateSpecialization::Test02()
{
	_12_07_PartialTemplateSpecialization_StaticArray<int, 4> int4{};
	for (int i = 0; i < 4; i++)
	{
		int4[i] = i * i;
	}

	int4.ThePrint();


	_12_07_PartialTemplateSpecialization_StaticArray<double, 4> double4{};
	for (int i = 0; i < 4; i++)
	{
		double4[i] = 0.1 * i;
	}

	double4.ThePrint();
}

//子类覆盖模版 建议使用
void _12_07_PartialTemplateSpecialization::Test03()
{
	_12_07_PartialTemplateSpecialization_NewStaticArray<double, 4> double4{};
	for (int i = 0; i < 4; i++)
	{
		double4[i] = 0.1 * i;
	}

	double4.Print();
}
