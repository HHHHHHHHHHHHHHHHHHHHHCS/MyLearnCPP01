#include "_11_08_VirtualBaseClasses.h"
//参考_10_7_MultipleInheritance
void _11_08_VirtualBaseClasses::Test()
{
	Test01();
}

//virtual base class 会让类有一个共享基类
//在构造 子类的时候 必须单独把共享基类构造了
//	建议放在前面构造   虽然放在后面构造也不影响效果
//之后继承共享基类的  都 使用共享基类
void _11_08_VirtualBaseClasses::Test01()
{
	D(1, 2, 3);
}

