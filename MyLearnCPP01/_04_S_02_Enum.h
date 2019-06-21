#pragma once
enum ParseResult
{
	SUCCESS = 0,
	ERROR_OPENING_FILE = -1,
	ERROR_READING_FILE = -2,
	ERROR_PARSING_FILE = -3
};


class _04_S_02_Enum
{
public:
	static void Test();
	static void DoColor();
	static void DoAnimal();
	static void Input();
	static ParseResult ReadFileContents();
	static void LikeClass();
};
