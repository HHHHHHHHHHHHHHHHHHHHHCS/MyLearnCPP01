#include  "MyLearnCPP01.h"
#include "_05_09_DynamicMemoryAllocation.h"
#include "_05_10_PointersAndConst.h"
#include "_05_11_ReferenceVariables.h"
#include "_05_12_ForEachLoops.h"
#include "_05_13_VoidPointer.h"
#include "_05_14_PointersToPointers.h"
#include "_05_15_Array.h"
#include "_05_16_Vector.h"
#include "_06_01_PassingArgumentsByReference.h"
#include "_06_02_PassingArgumentsByAddress.h"
#include "_06_03_ReturnValuesByValuesReferenceAddress.h"
#include "_06_04_Inline.h"
#include "_06_05_FunctionOverloading.h"
#include "_06_06_DefaultArguments.h"
#include "_06_07_FunctionPointers.h"
#include "_06_08_VectorCapacityStackBehavior.h"
#include "_06_09_Recursion.h"
#include "_06_10_ErrorsAssertCerrExit.h"
#include "_06_11_Assert.h"
#include "_06_12_CommandLineArguments.h"

//命令行参数  --->项目 配置属性 调试
//等价于int main(int argc, char** argv) 
//argc = argv[].length 即参数的总数
int main(int argc, char *argv[])
{
	_06_12_CommandLineArguments::Test(argc, argv);
	return 0;
}

