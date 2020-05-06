#include  "MyLearnCPP01.h"



#include "_16_01_StdStringAndStdWstring.h"
#include "_16_02_StdStringConstructionAndDestruction.h"
#include "_16_03_StdStringLengthAndCapacity.h"
#include "_16_04_StdStringCharacterAccessAndConversion.h"
#include "_16_05_StdStringAssignmentAndSwapping.h"
#include "_16_06_StdStringAppending.h"
#include "_16_07_StdStringInserting.h"
#include "_17_01_InputWithIStream.h"
#include "_17_02_OutputWithOstreamAndIos.h"
#include "_17_03_StreamClassesForStrings.h"


int main()
{
	_17_03_StreamClassesForStrings::Test();
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
