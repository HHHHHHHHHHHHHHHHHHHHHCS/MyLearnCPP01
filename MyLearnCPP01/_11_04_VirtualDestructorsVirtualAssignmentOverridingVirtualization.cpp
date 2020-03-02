#include "_11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization.h"

//析构函数如果不标记virtual
//	则会忘记删除父类的一些指针 导致内存泄漏
//	如果标记了则会消耗一些性能
//如果不想被继承则标记final 不会对派生类进行任何限制

void _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
}

void _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization::Test01()
{
	//这里因为没有virtual 
	//所以是调用基类的析构
	Derived1* d{new Derived1{5}};
	Base1* b{d};
	delete b;
}

void _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization::Test02()
{
	//这里有virtual
	//先调用派生  
	//派生析构完成 自动调用父类析构
	Derived2* d{new Derived2{5}};
	Base2* b{d};
	delete b;
}

void _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization::Test03()
{
	//如果基类标记了virtual 
	//则子类不被标记也有virtual 属性
	Derived3* d{new Derived3{5}};
	Base3* b{d};
	delete b;
}

void _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization::Test04()
{
	//强制调用基类
	Derived4 d{};
	Base4& b{d};
	std::cout <<d.GetName()<<"\n"<<b.Base4::GetName();
}
