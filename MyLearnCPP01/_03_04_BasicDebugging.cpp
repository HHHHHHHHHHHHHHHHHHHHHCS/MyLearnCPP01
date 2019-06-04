#include "_03_04_BasicDebugging.h"

#define ENABLE_DEBUG

void _03_04_BasicDebugging::Test()
{
	GetValue();
}

int _03_04_BasicDebugging::GetValue()
{
#ifdef  ENABLE_DEBUG
std::cerr << "getValue() called\n";// debug的缩进建议往前一格  可以方便让自己看到是DEBUG
#endif


	return 4;
}
