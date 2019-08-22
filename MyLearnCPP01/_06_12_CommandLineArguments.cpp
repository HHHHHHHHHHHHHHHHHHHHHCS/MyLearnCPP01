#include "_06_12_CommandLineArguments.h"
#include <iostream>
#include <sstream>
//命令行参数  --->项目 配置属性 调试
void _06_12_CommandLineArguments::Test(int argc, char* args[])
{
	Test01(argc, args);
	Test02(argc, args);
}

void _06_12_CommandLineArguments::Test01(int argc, char* args[])
{
	std::cout << "There are " << argc << " arguments:\n";

	for (int count = 0; count < argc; ++count)
		std::cout << count << " " << args[count] << '\n';
}


void _06_12_CommandLineArguments::Test02(int argc, char* args[])
{
	if (argc <= 1)
	{
		if (args[0])
			std::cout << "Usage: " << args[0] << " <number>" << '\n';
		else
			std::cout << "Usage: <program name> <number>" << '\n';

		exit(1);
	}

	std::stringstream convert(args[1]);

	int val;
	if (!(convert >> val))
		val = 0;
	std::cout << "Convert:" << val << '\n';
}
