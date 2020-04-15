#include "_14_06_StdSharedPtr.h"

void _14_06_StdSharedPtr::Test()
{
	Test01();
	//Test02();
}

//std::shared_ptr 可以安全的接受 std::unique_ptr
//但是std::unique_ptr 接受 std::shared_ptr  是危险的

//std::shared_ptr 在C++14不支持数组   17 半支持数组   20才能完全支持数组


void _14_06_StdSharedPtr::Test01()
{
	//std::shared_ptr 在最后一个块被释放的时候 资源也会被释放

	Resource *res = new Resource();

	std::shared_ptr<Resource> ptr1(res);
	{
		std::shared_ptr<Resource> ptr2(ptr1);

		std::cout << "kill one shared ptr\n";
	}
	std::cout << "Killing another shared pointer\n";
}


void _14_06_StdSharedPtr::Test02()
{
	//这里ptr1 ptr2 公用一块资源 所以ptr2 超发出范围会报错
	//std::shared_ptr 如传入资源则管理资源 
	//如果传入 std::shared_ptr  则管理指针的块
	//因此建议std::shared_ptr 就一个专门用来管理资源 
	Resource *res = new Resource();

	std::shared_ptr<Resource> ptr1(res);
	{
		std::shared_ptr<Resource> ptr2(res);

		std::cout << "kill one shared ptr\n";
	}
	std::cout << "Killing another shared pointer\n";
}
