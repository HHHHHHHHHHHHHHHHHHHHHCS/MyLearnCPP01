#pragma once

class _10_04_InheritanceAccessSpecifiers
{
public:
	class Base
	{
	public :
		int m_public;
	private:
		int m_private;
	protected:
		int m_protected;
	};

	class Pub : public Base
	{
	public:
		int m_public1;
	private:
		int m_private1;
	protected:
		int m_protected1;

	public:
		Pub()
		{
			m_public = 0;
			//m_private = 1;//error
			m_protected = 2;
		}
	};

	class Pri : private Base
	{
	public:
		int m_public1;
	private:
		int m_private1;
	protected:
		int m_protected1;

	public:
		Pri()
		{
			m_public = 0;
			//m_private = 1;//error
			m_protected = 2;
		}
	};

	class Pro : protected Base
	{
	public:
		int m_public1;
	private:
		int m_private1;
	protected:
		int m_protected1;

	public:
		Pro()
		{
			m_public = 0;
			//m_private = 1;//error
			m_protected = 2;
		}
	};


	class Def : Base
	{
	public:
		int m_public1;
	private:
		int m_private1;
	protected:
		int m_protected1;

	public:
		Def()
		{
			m_public = 0;
			//m_private = 1;//error
			m_protected = 2;
		}
	};


	static void Test();
};
