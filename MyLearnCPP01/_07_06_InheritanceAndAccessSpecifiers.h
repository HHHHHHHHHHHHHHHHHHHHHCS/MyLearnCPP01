#pragma once

class _07_06_InheritanceAndAccessSpecifiers
{
public:
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
	static void Test05();
};

class _07_06_InheritanceAndAccessSpecifiers_Cls
{
public:
	class Base
	{
	public:
		int m_public;
	private:
		int m_private;
	protected:
		int m_protected;
	};

	class Derived : public Base
	{
	public:
		Derived()
		{
			m_public = 1;
			//m_private = 2;//error
			m_protected = 3;
		}
	};

	class Pub : public Base
	{
	public:
		Pub()
		{
			m_public = 1;
			//m_private = 2;//error
			m_protected = 3;
		}
	};

	class Pri : private Base
	{
	public:
		Pri()
		{
			m_public = 1;
			//m_private = 2;//error
			m_protected = 3;
		}
	};

	class Pro : protected Base
	{
	public:
		Pro()
		{
			m_public = 1;
			//m_private = 2;//error
			m_protected = 3;
		}
	};

	class Def : Base //默认是private
	{
	public:
		Def()
		{
			m_public = 1;
			//m_private = 2;//error
			m_protected = 3;
		}
	};
};
