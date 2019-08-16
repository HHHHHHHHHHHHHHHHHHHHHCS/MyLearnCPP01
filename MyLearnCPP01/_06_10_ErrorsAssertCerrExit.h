#pragma once
#include <array>

class _06_10_ErrorsAssertCerrExit
{
public:
	static void Test();
	static void CheckNull(const char* cstring);
	static int CheckCode(const std::array<int, 10>& array, int index);
	static int ExitProgram(const std::array<int, 10>& array, int index);
	static void CheckInput();
	static void PrintCerr(const char* cstring);
};
