#pragma once

class _07_02_PublicPrivate
{
public:
	struct Str
	{
		//struct默认是公开的
		int month;
		int day;
		int year;
	};

	class Cls
	{
		//class默认是私有
		int m_month;
		int m_day;
		int m_year;
	public:
		int hour;

		void SetMin(int val);
		int GetMin() const;
	private:
		int min;
	};

	static void Test();
	static void Test01();
	static void Test02();
};
