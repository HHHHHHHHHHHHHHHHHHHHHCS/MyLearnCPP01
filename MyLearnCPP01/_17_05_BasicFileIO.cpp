#include "_17_05_BasicFileIO.h"
#include <fstream>
#include <iostream>
#include <string>

void _17_05_BasicFileIO::Test()
{
	//Test01();
	//Test02();

	//Test03();
	//Test02();

	Test04();
	Test02();
}

int _17_05_BasicFileIO::Test01()
{
	//创建一个 Sample.dat 
	//写入数据
	std::ofstream outf{"Sample.dat"};
	if (!outf)
	{
		std::cerr << "Can't open for writing!" << std::endl;
		return 1;
	}

	outf << "This is line 1 " << '\n';
	outf << "This is line 2 " << '\n';

	return 0;
}

int _17_05_BasicFileIO::Test02()
{
	//读取数据
	std::ifstream inf{"Sample.dat"};

	if (!inf)
	{
		std::cerr << "Can't open for reading" << std::endl;
		return 1;
	}

	while (inf)
	{
		std::string strInput;
		//inf >> strInput; //空格就是一次读取
		std::getline(inf, strInput); //\n就是一次读取
		std::cout << strInput << '\n';
	}

	return 0;
}

int _17_05_BasicFileIO::Test03()
{
	/*
	Ios file mode 	Meaning
	app 			Opens the file in append mode
	ate 			Seeks to the end of the file before reading / writing
	binary 			Opens the file in binary mode(instead of text mode)
	in 				Opens the file in read mode(default for ifstream)
	out 			Opens the file in write mode(default for ofstream)
	trunc 			Erases the file if it already exists
	*/

	std::ofstream outf{"Sample.dat",std::ios::app };

	if(!outf)
	{
		std::cerr << "Can't open for writing" << '\n';
		return 1;
	}

	outf << "This is line 3" << '\n';
	outf << "This is line 4" << '\n';

	return 0;
}

int _17_05_BasicFileIO::Test04()
{
	std::ofstream outf{ "Sample.dat" };
	outf << "This is line 1" << '\n';
	outf << "This is line 2" << '\n';
	outf.close(); // explicitly close the file

	// Oops, we forgot something
	outf.open("Sample.dat", std::ios::app);
	outf << "This is line 3\n";
	outf.close();

	return 1;
}
