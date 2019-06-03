#include "_03_04_BasicDebugging.h"

void _03_04_BasicDebugging::Test()
{
	GetValue();
}

int _03_04_BasicDebugging::GetValue()
{
	std::cerr << "getValue() called\n";
	return 4;
}
