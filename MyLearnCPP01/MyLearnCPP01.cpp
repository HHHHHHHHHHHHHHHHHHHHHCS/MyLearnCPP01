#include  "MyLearnCPP01.h"
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
#include "_11_03_OverrideFinalAndCovariantReturnTypes.h"
#include "_11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization.h"
#include "_11_05_EarlyBindingLateBinding.h"
#include "_11_06_VirtualTable.h"
#include "_11_07_PureVirtualAndAbstractAndInterface.h"
#include "_11_08_VirtualBaseClasses.h"
#include "_11_09_ObjectSlicing.h"
#include "_11_10_DynamicStaticCasting.h"
#include "_11_11_PrintingUsingOperator.h"
#include "_12_01_FunctionTemplates.h"
#include "_12_02_FunctionTemplateInstances.h"
#include "_12_03_TemplateClasses.h"
#include "_12_04_TemplateNonTypeParameters.h"
#include "_12_05_FunctionTemplateSpecialization.h"
#include "_12_06_ClassTemplateSpecialization.h"
#include "_12_07_PartialTemplateSpecialization.h"
#include "_12_08_PartialTemplateSpecializationPointers.h"
#include "_13_01_TheNeedForExceptions.h"
#include "_13_02_BasicExceptionHandling.h"
#include "_13_03_ExceptionsFunctionsAndStackUnwinding.h"
#include "_13_04_UncaughtExceptionsCatchAllHandlersExceptionSpecifiers.h"
#include "_13_05_ExceptionsClassesAndInheritance.h"
#include "_13_06_RethrowingExceptions.h"
#include "_13_07_FunctionTryBlocks.h"
#include "_13_08_ExceptionDangersAndDownsides.h"
#include "_14_01_IntroToSmartPointersAndMoveSemantics.h"
#include "_14_02_RValueReferences.h"
#include "_14_03_MoveConstructorsAndMoveAssignment.h"
#include "_14_04_StdMove.h"
#include "_14_05_StdUniquePtr.h"
#include "_14_06_StdSharedPtr.h"
#include "_14_07_CircularDependencyStdSharedPtrAndStdWeakPtr.h"


int main()
{
	_14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test();
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
