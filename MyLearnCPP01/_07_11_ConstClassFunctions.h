#pragma once
#include <string>

class _07_11_ConstClassFunctions
{
public:
	struct Date
	{
		int year;
		int month;
		int day;

		Date()
		{
		}

		Date(int _y, int _m, int _d)
		{
			year = _y;
			month = _m;
			day = _d;
		}

		int GetYear() const { return year; }
		int GetMonth() const { return month; }
		int GetDay() const { return day; }
	};


	class Something
	{
	public:
		int m_value;
		std::string m_str;

		Something(const std::string& value = "") : m_value(0)
		{
			//value = "asdas";//被比较成const传入  则不能修改
			m_str = value;
		}

		void SetValue(int value) { m_value = value; }
		int GetValue() const { return m_value; }

		//const 方法不能改变成员变量
		/*
		int GetSetValue() const
		{
			m_value = 3;
			return m_value;
		}
		*/

		std::string& GetString() { return m_str; }

		//std::string& 不能是cost
		//std::string&  GetCString() const { return m_str; }
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
