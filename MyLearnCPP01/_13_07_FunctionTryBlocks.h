#pragma once
#include <iostream>

class _13_07_FunctionTryBlocks
{
public:
	static void Test();

	//当对象的构造失败时，不调用类的析构函数。
	//因此，您可能会尝试使用函数try块来清理在失败之前已部分分配了资源的类
	class A
	{
	private:
		int m_x;
	public :
		A(int x): m_x(x)
		{
			if (x <= 0)
				throw 1;
		}

		~A() 
		{
			std::cout << "Delete A";
		}
	};

	class B : public A
	{
	public:
		B(int x)try: A(x)//注意这里的try
		{
		}
		catch (...)
		{
			std::cerr << "Exception \n";
			//如果没有手动抛出 则会隐式抛出收到的异常
		}

		~B()
		{
			std::cout << "Delete B";
		}
	};

	static void Test01();

	class AA
	{
	private:
		int m_x;
	public:
		AA(int x) : m_x(x)
		{
		}
	};

	class BB : public AA
	{
	public:
		BB(int x) try : AA(x) 
		{
			if (x <= 0)
				throw 1;
		}
		catch (...)
		{
			std::cerr << "Exception caught\n";
			//如果没有手动抛出 则会隐式自动抛出
		}
	};


	static void Test02();
};
