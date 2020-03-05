#pragma once
#include <string>
#include <iostream>

class _11_07_PureVirtualAndAbstractAndInterface
{
public:
	class Base
	{
	public:
		//function() = 0 的意思是纯虚拟函数
		const char* sayHi() { return "Hi"; } // a normal non-virtual function    

		virtual const char* getName() { return "Base"; } // a normal virtual function

		virtual int getValue() = 0; // a pure virtual function

		// int doSomething() = 0; // ERROR : 不是Virtual 不能标记成纯虚拟函数
	};

	//------------

	class Animal
	{
	protected:
		std::string m_name;

		Animal(std::string name): m_name(name)
		{
		}

	public :
		std::string GetName() { return m_name; }
		virtual const char* Speak() = 0; // { return "???"; }
	};

	class Cat : public Animal
	{
	public :
		Cat(std::string name)
			: Animal(name)
		{
		}

		virtual const char* Speak() { return "Meow"; }
	};

	//编译失败:没有重写纯虚拟函数
	/*
	class Cow : public Animal
	{
	public:
		Cow(std::string name)
			: Animal(name)
		{
		}

		// We forgot to redefine speak
	};
	*/

	class Dog : public Animal
	{
	public:
		Dog(std::string name)
			: Animal(name)
		{
		}

		virtual const char* Speak() { return Animal::Speak(); }
	};

	//-------

	//类似于接口 I开头符合书写的规范
	class IErrorLog
	{
	public:
		virtual bool OpenLog(const char* filename) = 0;

		//用虚拟析构函数 确保派生继承的时候能 
		//通过虚拟表调用到派生的析构
		virtual ~IErrorLog()
		{
		}
	};

	class OneLog : public IErrorLog
	{
	public:
		virtual bool OpenLog(const char* filename)
		{
			std::cout << filename<<'\n';
			return true;
		}

		virtual ~OneLog()
		{
		}
	};

	class TwoLog : public IErrorLog
	{
	public:
		virtual bool OpenLog(const char* filename)
		{
			std::cout << filename << '\n';
			return false;
		}

		virtual ~TwoLog()
		{
		}
	};

	static double OpenLog(double value, IErrorLog& log)
	{
		if (value < 0.0)
		{
			log.OpenLog("Tried to take square root of value less than 0");
			return 0.0;
		}
		else
			return sqrt(value);
	}

	static void Test();
	static void Test01();
	static void Test02();
};
