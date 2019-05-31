#include "_02_10_Preprocessor.h"
#define AlexName "Alex"
#define PI 3.14
#define IPhone

void _02_10_Preprocessor::Test()
{
	DefineName();
	DefineNumber();
	DefineCondition();
	DefineIf0();
}

void _02_10_Preprocessor::DefineName()
{
	std::cout << "Alex name is:" << AlexName << std::endl;
}

void _02_10_Preprocessor::DefineNumber()
{
	std::cout << 4 * 4 * PI << std::endl;
}

void _02_10_Preprocessor::DefineCondition()
{
#ifdef  IPhone
	std::cout << "Iphone" << std::endl;
#endif

#ifndef PI
	std::cout << "#ifndef PI" << std::endl;
#endif

#ifdef Android

#else
	std::cout << "else Android" << std::endl;
#endif
}

void _02_10_Preprocessor::DefineIf0()
{
#if 0
	std::cout << "Print Define0" << std::endl;
#else
	std::cout << "Print NO Define 0" << std::endl;
#endif
}


//C++ 会自上而下的扫描define 做预处理  所以只要define 在上面就能被处理
//还有一个define的文件不会影响到另外一个文件
void _02_10_Preprocessor::DefineWhere()
{
#if PC

#endif


#define PC true

#if PC
	std::cout << "PC" << std::endl;
#endif
}
