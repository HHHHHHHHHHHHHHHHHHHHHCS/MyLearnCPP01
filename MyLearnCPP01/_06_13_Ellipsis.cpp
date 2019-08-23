#include "_06_13_Ellipsis.h"
#include <iostream>
#include <cstdarg>
#include <cstdarg>

//因为省略号不安全不建议使用

void _06_13_Ellipsis::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _06_13_Ellipsis::Test01()
{
	std::cout << FindAverage(5, 1, 2, 3, 4, 5) << std::endl;
	std::cout << FindAverage(6, 1, 2, 3, 4, 5) << std::endl; //如果数据数量不匹配  结果错误
	std::cout << FindAverage(6, 1, 2.0f, 3, 4, 5) << std::endl; //如果精度不匹配 结果错误
	std::cout << FindAverage(6, 1, "hi", 3, 4, 5) << std::endl; //如果数据类型不匹配 结果错误
}

double _06_13_Ellipsis::FindAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	//初始化list  并且绑定数据
	//第一个参数是容器   第二参数是最后一个非省略号参数
	va_start(list, count);

	for (int arg = 0; arg < count; arg++)
	{
		sum += va_arg(list, int);
	}

	//清除list 解除绑定
	va_end(list);

	return sum / count;
}


void _06_13_Ellipsis::Test02()
{
	std::cout << Sum(5, 1, 2, 3, 4, 5, -1) << std::endl;
	std::cout << Sum(6, 1, 2, 3, 4, 5, -1) << std::endl;
	std::cout << Sum(6, 1, 2.0f, 3, 4, 5, -1) << std::endl; //精度不匹配则会自动转
	std::cout << Sum(6, 1, "hi", 3, 4, 5, -1) << std::endl; //如果数据类型不匹配 结果错误
}

double _06_13_Ellipsis::Sum(int first, ...)
{
	double sum = first;

	va_list list;

	//第一个参数是容器   第二参数是最后一个非省略号参数
	va_start(list, first);

	int count = 0;
	while (true)
	{
		//从列表中获取参数  第二个是参数类型
		//如果参数类型不匹配则会报错
		int arg = va_arg(list, int);

		if (arg == -1)
		{
			//自己定义一个-1当结束
			break;
		}

		sum += arg;
		count++;
	}

	va_end(list);

	return sum * count;
}

void _06_13_Ellipsis::Test03()
{
	std::cout << Decoder("iiiii", 1, 2, 3, 4, 5) << '\n';
	std::cout << Decoder("iiiiii", 1, 2, 3, 4, 5, 6) << '\n';
	std::cout << Decoder("iiddi", 1, 2, 3.5, 4.5, 5) << '\n';
}

double _06_13_Ellipsis::Decoder(std::string data, ...)
{
	//跟 printf 差不多的感觉
	double sum = 0;

	va_list list;

#pragma warning(disable: 4840)
	va_start(list, data);  
#pragma warning(default : 4840)

	int count = 0;

	while (1)
	{
		char codetype = data[count];
		switch (codetype)
		{
		default:
		case '\0':
			va_end(list);
			return sum / count;

		case 'i':
			sum += va_arg(list, int);
			count++;
			break;

		case 'd':
			sum += va_arg(list, double);
			count++;
			break;
		}
	}
}
