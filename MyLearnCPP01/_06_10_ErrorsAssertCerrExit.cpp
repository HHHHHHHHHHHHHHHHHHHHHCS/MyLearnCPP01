#include "_06_10_ErrorsAssertCerrExit.h"
#include <string>
#include <iostream>
#include <array>

void _06_10_ErrorsAssertCerrExit::Test()
{
}


//1）静静地跳过依赖于假设有效的代码：
void _06_10_ErrorsAssertCerrExit::CheckNull(const char *cstring)
{
	if (cstring)
		std::cout << cstring;
}

//2）如果我们在函数中，则将错误代码返回给调用者并让调用者处理问题。
int _06_10_ErrorsAssertCerrExit::CheckCode(const std::array<int, 10>& array, int index)
{
	// use if statement to detect violated assumption
	if (index < 0 || index >= array.size())
		return -1; // return error code to caller

	return array[index];
}

//3）如果我们想要 终止程序立即生效，<cstdlib>中的exit函数可用于向操作系统返回错误代码：
int _06_10_ErrorsAssertCerrExit::ExitProgram(const std::array<int, 10> &array, int index)
{
	// use if statement to detect violated assumption
	if (index < 0 || index >= array.size())
		exit(2); // terminate program and return error number 2 to OS

	return array[index];
}

//4）如果用户输入了无效输入，请让用户再次输入输入。
void _06_10_ErrorsAssertCerrExit::CheckInput()
{
	std::string hello = "Hello, world!";
	int index;

	do
	{
		std::cout << "Enter an index: ";
		std::cin >> index;

		//handle case where user entered a non-integer
		if (std::cin.fail())
		{
			std::cin.clear(); // reset any error flags
			std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
			index = -1; // ensure index has an invalid value so the loop doesn't terminate
			continue; // this continue may seem extraneous, but it explicitly signals an intent to terminate this loop iteration
		}

	} while (index < 0 || index >= hello.size()); // handle case where user entered an out of range integer

	std::cout << "Letter #" << index << " is " << hello[index] << std::endl;
}

//5）cerr是另一种专门用于打印错误消息的机制。 cerr是在<iostream>中定义的输出流（就像cout一样）。通常，cerr会在屏幕上写入错误消息（就像cout一样），但它也可以单独重定向到文件
void _06_10_ErrorsAssertCerrExit::PrintCerr(const char *cstring)
{
	if (cstring)
		std::cout << cstring;
	else
		std::cerr << "function printString() received a null parameter";
}

//6）如果在工作 一些 图形环境（例如MFC，SDL，QT等......），通常会弹出一个带有错误代码的消息框然后 终止 该程序