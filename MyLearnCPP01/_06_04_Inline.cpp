#include "_06_04_Inline.h"
#include <iostream>

inline int _06_04_Inline::min(int x, int y)
{
	return x > y ? y : x;
}

void _06_04_Inline::Test01()
{
	std::cout << min(5,6)<<std::endl;
}

