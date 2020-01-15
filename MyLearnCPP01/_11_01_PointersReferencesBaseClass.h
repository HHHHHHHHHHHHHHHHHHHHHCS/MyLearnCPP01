#pragma once
#include <string_view>

class _11_01_PointersReferencesBaseClass
{
public:
	class Base
	{
	protected:
		int m_value;

	public:
		Base(int value)
			: m_value{value}
		{
		}

		std::string_view GetName() const { return "Base"; }
		int GetValue() const { return m_value; }
	};

	class Derived : public Base
	{
	public:
		Derived(int value)
			: Base(value)
		{
		}

		std::string_view GetName() const { return "Derived"; }
		int GetValueDoubled() const { return m_value * 2; }
		void SetValue(int value) { m_value = value; }

	};


	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
