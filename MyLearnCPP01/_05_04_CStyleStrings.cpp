#define _CRT_SECURE_NO_WARNINGS


#include "_05_04_CStyleStrings.h"
#include <iostream>

void _05_04_CStyleStrings::Test()
{
	//下面是错误的  需要  array[2][4]  如果 4写成5  C++ 会自动补充0
	//int array[][] =
	//{
	//{ 1, 2, 3, 4 },
	//{ 5, 6, 7, 8 }
	//};

	PrintString2Chars();
	CreateString();
	CinString();
	UseStrcpy();
	UseStrcpy_S();
	StringLength();
}

void _05_04_CStyleStrings::PrintString2Chars()
{
	char myString[] = "string";
	const int length = (int)std::size(myString);
	std::cout << myString << " has " << length << " characters.\n";
	for (int index = 0; index < length; ++index)
		std::cout << static_cast<int>(myString[index]) << " ";
}

void _05_04_CStyleStrings::CreateString()
{
	char myString[] = "string"; 
	//myString = "rope"; // ERROR
	myString[1] = 'p';
	std::cout << myString;

	char name[20] = "Alex"; // 使用五个字符串 4+1个结尾符号
	std::cout << "My name is: " << name << '\n';
}

void _05_04_CStyleStrings::CinString()
{
	char name[255]; 
	std::cout << "Enter your name: ";
	//std::cin >> name;//使用cin.getline更好
	std::cin.getline(name, 255);
	std::cout << "You entered: " << name << '\n';
}

void _05_04_CStyleStrings::UseStrcpy()
{
	char source[] = "Copy this!";
	char dest[50];//如果dest 设置小 会溢出报错

	strcpy(dest, source);//会安全报错 加入#define _CRT_SECURE_NO_WARNINGS
	std::cout << dest; 


}

void _05_04_CStyleStrings::UseStrcpy_S()
{
	char source[] = "Copy this!";
	char dest[5]; //使用带大小的 ,但是遇到结尾符还是会继续
	strcpy_s(dest, 5, source); 
	std::cout << dest;
}


void _05_04_CStyleStrings::StringLength()
{
	char name[20] = "Alex"; 
	std::cout << "My name is: " << name << '\n';
	std::cout << name << " has " << strlen(name) << " letters.\n";
	std::cout << name << " has " << std::size(name)<< ','<<sizeof(name[0]) << " characters in the array.\n";
}