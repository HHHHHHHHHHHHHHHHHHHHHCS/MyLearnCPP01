#include "_06_05_FunctionOverloading.h"
#include <iostream>

void _06_05_FunctionOverloading::Test()
{
	Test01();
	Test02();
}


/*
//typedef 不会引入新的类型 所以这两个print是相同的
typedef char* string;

void Print(string val);
void Print(char* val);
*/

/*
 *1.对于重载 首先，C ++尝试找到完全匹配。这是实际参数完全匹配的情况参数其中一个重载函数的类型。
 *2.如果没有找到完全匹配，C ++会尝试通过提升找到匹配项
 *3.如果无法进行提升，C ++会尝试通过标准转换找到匹配项。标准转化包括：
	任何数字类型都将匹配任何其他数字类型，包括unsigned（例如int to float）
	枚举将匹配数字类型的正式类型（例如enum to float）
	零将匹配指针类型和数字类型（例如0到char *，或0到float）
	指针将匹配void指针
 *4.最后，C ++尝试通过用户定义的转换找到匹配.
 */


int _06_05_FunctionOverloading::Add(int x, int y)
{
	return x + y;
}


double _06_05_FunctionOverloading::Add(double x, double y)
{
	return x + y;
}


void _06_05_FunctionOverloading::Test01()
{
	std::cout << Add(1, 2) << std::endl;
	std::cout << Add(1.0, 2.0) << std::endl;
}

//不加上out  会引起同名歧义
int _06_05_FunctionOverloading::GetRandom(int& out)
{
	return out = 5;
}

double _06_05_FunctionOverloading::GetRandom(double& out)
{
	return out = 5.0;
}

void _06_05_FunctionOverloading::Test02()
{
	int i0;
	int i1 = GetRandom(i0);
	double d0;
	double d1 = GetRandom(d0);

	std::cout << i0 << ' ' << i1 << ' ' << d0 << ' ' << d1 << std::endl;;
}
