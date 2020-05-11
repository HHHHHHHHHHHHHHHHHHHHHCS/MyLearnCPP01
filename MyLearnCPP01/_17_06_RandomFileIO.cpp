#include "_17_06_RandomFileIO.h"
#include <fstream>
#include <iostream>
#include <string>

/*
 * 不要把地址写入文件  因为地址信息可能会发生变化
 */

void _17_06_RandomFileIO::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _17_06_RandomFileIO::Test01()
{
	std::ifstream inf{"Sample.dat"};

	if (!inf)
	{
		std::cerr << "Can't open reading\n";
	}

	std::string strData;

	inf.seekg(5);
	std::getline(inf, strData);
	std::cout << strData << '\n';

	inf.seekg(8, std::ios::cur); //cur 当前的位置
	std::getline(inf, strData);
	std::cout << strData << '\n';

	inf.seekg(-15, std::ios::end); //移到末尾
	std::getline(inf, strData);
	std::cout << strData << '\n';

	inf.seekg(0, std::ios::beg);
	std::getline(inf, strData);
	std::cout << strData << '\n';
}

void _17_06_RandomFileIO::Test02()
{
	std::ifstream inf{"Sample.dat", std::ifstream::binary}; //以二进制打开
	inf.seekg(0, std::ios::end);
	std::cout << inf.tellg() << '\n'; //tellg 当前游标的位置 用于确定文件大小
}

void _17_06_RandomFileIO::Test03()
{
	//文件流
	std::fstream iofile{"Sample.dat", std::ios::in || std::ios::out};

	if (!iofile)
	{
		std::cout << "Can't Open File.\n";
		return;
	}

	char chChar{};

	while (iofile.get(chChar))
	{
		switch (chChar)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			iofile.seekg(-1, std::ios::cur);
			iofile << '#';
			iofile.seekg(iofile.tellg(), std::ios::beg);
			break;
		}
	}

	//关闭当前的打开的文件流
	iofile.close();
	//删除文件 用 remove
	//std::remove("Sample.dat");
	//判断当前处于打开状态
	//iofile.is_open()
}
