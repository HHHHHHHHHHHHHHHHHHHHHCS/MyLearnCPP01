#include  "MyLearnCPP01.h"
#include "_08_14_ShallowSeepCopying.h"
#include "_09_01_Composition.h"
#include "_09_02_Aggregation.h"
#include "_09_03_Association.h"
#include "_09_04_Dpendencies.h"
#include "_09_05_Container.h"
#include "_09_06_InitializerList.h"
#include "_10_01_BasicInheritance.h"

int main()
{
	_10_01_BasicInheritance::Test();
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
