#pragma once
#include <string>

//enum 在C++11 加了class 域概念 避免子成员与别人的子成员重名
enum class  _13_01_TheNeedForExceptions_ParseResult
{
	SUCCESS = 0,
	ERROR_OPENING_FILE = -1,
	ERROR_READING_FILE = -2,
	ERROR_PARSING_FILE = -3
};

class _13_01_TheNeedForExceptions
{
public:
	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static int FindFirstChar(const char* string, char ch);
	static double Divide(int x, int y, bool& success);
	static _13_01_TheNeedForExceptions_ParseResult SetupIni(std::string path = "Setup.ini");
};
