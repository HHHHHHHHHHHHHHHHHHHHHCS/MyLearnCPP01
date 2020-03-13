#pragma once
#include <string>

class _11_10_DynamicStaticCasting
{
public:
	enum ClassType
	{
		TheBase,
		TheDerived
	};

	class Base
	{
	protected:
		int m_value;

	public:
		ClassType type = TheBase;

		Base(int value)
			: m_value(value)
		{
		}

		virtual ~Base()
		{
		}
	};

	class Derived : public Base
	{
	protected:
		std::string m_name;

	public:
		ClassType type = TheDerived;


		Derived(int value, std::string name)
			: Base(value), m_name(name)
		{
		}

		const std::string& GetName() { return m_name; }
	};

	static Base* GetObject(bool isDerived)
	{
		if(isDerived)
		{
			return new Derived(1, "App");
		}
		else
		{
			return new Base(2);
		}
	}

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
