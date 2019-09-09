#include "_07_09_Destructors.h"

void _07_09_Destructors::Test()
{
	//Test01();
	Test02();
}

void _07_09_Destructors::Test01()
{
	IntArray ar(10);
	for(int i=0;i<ar.GetLength();i++)
	{
		ar.SetValue(i, i + 1);
	}

	std::cout << ar.GetValue(5) << std::endl;
	//ar在函数结束 自动回收
}

void _07_09_Destructors::Test02()
{
	// 栈堆指针
	Simple simple(1);
	std::cout << simple.getID() << '\n';

	// 动态指针
	Simple *pSimple = new Simple(2);
	std::cout << pSimple->getID() << '\n';

	delete pSimple;
	//delete &simple; //这个会报错   局部会在结束的时候自动回收一次所以报错了

}


