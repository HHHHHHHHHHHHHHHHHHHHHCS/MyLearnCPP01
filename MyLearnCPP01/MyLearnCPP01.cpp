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
#include "_07_09_Destructors.h"
#include "_07_10_HiddenThisPointer.h"
#include "_07_11_ConstClassFunctions.h"
#include "_07_12_StaticMemberVariables.h"
#include "_07_13_StaticFunctions.h"
#include "_07_14_FriendFunctionsClasses.h"
#include "_07_15_AnonymousObjects.h"
#include "_07_16_NestedTypesInClasses.h"
#include "_07_17_TimingCode.h"
#include "_08_01_ArithmeticOperators.h"

int main()
{
	_08_01_ArithmeticOperators::Test();
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
