﻿#include  "MyLearnCPP01.h"
#include "_08_14_ShallowSeepCopying.h"
#include "_09_01_Composition.h"
#include "_09_02_Aggregation.h"
#include "_09_03_Association.h"
#include "_09_04_Dpendencies.h"
#include "_09_05_Container.h"
#include "_09_06_InitializerList.h"
#include "_10_01_BasicInheritance.h"
#include "_10_02_OrderConstructionClasses.h"
#include "_10_03_ConstructorsInitializationClasses.h"
#include "_10_04_InheritanceAccessSpecifiers.h"
#include "_10_05_AddingNewFunctionality.h"
#include "_10_6_InheritedOverridingFunctions.h"
#include "_10_7_MultipleInheritance.h"
#include "_11_01_PointersReferencesBaseClass.h"
#include "_11_02_VirtualFunctionsAndPolymorphism.h"

int main()
{
	_11_02_VirtualFunctionsAndPolymorphism::Test();
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
