#include  "MyLearnCPP01.h"



#include "_16_01_StdStringAndStdWstring.h"
#include "_16_02_StdStringConstructionAndDestruction.h"
#include "_16_03_StdStringLengthAndCapacity.h"
#include "_16_04_StdStringCharacterAccessAndConversion.h"


int main()
{
	_16_04_StdStringCharacterAccessAndConversion::Test();
	return 0;
}

//命令行参数  --->项目 配置属性 调试
//等价于int main(int argc, char** argv) 
//argc = argv[].length 即参数的总数
/* 06 12 命令行用
int main(int argc, char *argv[])
{
	_06_12_CommandLineArguments::Test(argc, argv);
	return 0;
}
*/
