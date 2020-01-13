#pragma once
#include <iostream>

class _10_6_InheritedOverridingFunctions
{
public:
	class Base
	{
	protected:
		int m_value;
	public:
		Base(int value)
			: m_value(value)
		{
		}

		void Identify() { std::cout << "I am a Base\n"; }

		friend std::ostream& operator<<(std::ostream& out, const Base& b)
		{
			out << "In Base \n";
			out << b.m_value << '\n';
			return out;
		}

		void PublicFunc() const { std::cout << m_value << '\n'; }


	protected:
		void ProtFunc() const { std::cout << m_value << '\n'; }
		void ProtFunc(int x) const { std::cout << m_value + x << '\n'; }
	};

	class Derived : public Base
	{
	private:
		//引用父方法没有权限
		using Base::m_value;

	public:
		Derived(int value)
			: Base(value)
		{
		}

		int GetValue() { return m_value; }

		void BaseIdentify() { Base::Identify(); }

		void Identify() { std::cout << "I am a Derived\n"; }

		friend std::ostream& operator<<(std::ostream& out, const Derived& d)
		{
			out << "In Derived\n";
			out << static_cast<Base>(d);
			return out;
		}

		//删除继承的父类方法
		void PublicFunc() = delete;

		//引用父类的方法 注意这里是没有参数的
		using Base::ProtFunc;
	};


	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();

};
