#include "_14_03_MoveConstructorsAndMoveAssignment.h"

void _14_03_MoveConstructorsAndMoveAssignment::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
	Test05();
}

void _14_03_MoveConstructorsAndMoveAssignment::Test01()
{
	//三次创建和销毁 性能消耗比较高
	Auto_ptr1<Res> mainRes;
	mainRes = GenerateAutoPtr1();
}

void _14_03_MoveConstructorsAndMoveAssignment::Test02()
{
	//只创建和销毁一次 
	//如果你想要一个移动构造函数和一个移动赋值，你需要自己编写它们。
	//C++ 11通过R值引用，当我们的参数是R值和L值时，我们能够提供不同的行为。
	Auto_ptr2<Res> mainRes;
	mainRes = GenerateAutoPtr2();
}

void _14_03_MoveConstructorsAndMoveAssignment::Test03()
{
	Auto_ptr3<Res> mainRes;
	mainRes = GenerateAutoPtr3();
}

void _14_03_MoveConstructorsAndMoveAssignment::Test04()
{
	//使用拷贝赋值
	Timer t;

	DynamicArray<int> arr(100000000);

	for (int i = 0; i < arr.getLength(); i++)
		arr[i] = i;

	arr = CloneArrayAndDouble(arr);

	std::cout << t.elapsed() << '\n';
}

void _14_03_MoveConstructorsAndMoveAssignment::Test05()
{
	//使用移动赋值
	Timer t;

	DynamicArray_Move<int> arr(100000000);

	for (int i = 0; i < arr.getLength(); i++)
		arr[i] = i;

	arr = CloneArrayAndDouble_Move(arr);

	std::cout << t.elapsed() << '\n';
}
