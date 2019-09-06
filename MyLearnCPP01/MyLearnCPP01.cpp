#include  "MyLearnCPP01.h"
#include "_06_13_Ellipsis.h"
#include "_07_01_ClassesAndClassMembers.h"
#include "_07_02_PublicPrivate.h"
#include "_07_03_Encapsulation.h"
#include "_07_04_Constructors.h"
#include "_07_05_ConstructorMemberInitializerLists.h"
#include "_07_06_InheritanceAndAccessSpecifiers.h"
#include "_07_07_NonStaticMemberInitialization.h"
#include "_07_08_OverlappingAndDelegatingConstructors.h"

int main()
{
	_07_08_OverlappingAndDelegatingConstructors::Test();
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
