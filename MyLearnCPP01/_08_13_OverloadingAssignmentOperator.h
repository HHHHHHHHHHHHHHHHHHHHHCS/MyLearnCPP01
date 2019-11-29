#pragma once
#include <cassert>
#include <iostream>

class _08_13_OverloadingAssignmentOperator
{
public:
	class Fraction
	{
	private:
		int m_num;
		int m_den;
	public:
		Fraction(int num = 0, int den = 1):
			m_num(num), m_den(den)
		{
			assert(den != 0);
		}

		Fraction(const Fraction& copy) :
			m_num(copy.m_num), m_den(copy.m_den)
		{
			std::cout << "Copy Func\n";
		}

		//Fraction& operator=(const Fraction &fraction) = default;
		//跟上面的效果一样
		Fraction& operator=(const Fraction& fraction)
		{
			m_num = fraction.m_num;
			m_den = fraction.m_den;
			std::cout << "operator = \n";

			return *this;
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
		{
			out << f.m_num << '/' << f.m_den << '\n';
			return out;
		}
	};

	class MyString
	{
	private:
		char* m_data;
		int m_length;

	public:
		MyString(const char* data = "", int length = 0): m_length(length)
		{
			if (!length)
				m_data = nullptr;
			else
				m_data = new char[length];

			for (int i = 0; i < length; i++)
			{
				m_data[i] = data[i];
			}
		}


		friend std::ostream& operator<<(std::ostream& out, const MyString& s)
		{
			out << s.m_data << '\n';
			return out;
		}

		MyString& operator=(const MyString& str)
		{
			//阻止自己
			if (this == &str)
				return *this;

			if (m_data) delete[] m_data;

			m_length = str.m_length;

			m_data = new char[str.m_length];

			for (int i = 0; i < str.m_length; i++)
			{
				m_data[i] = str.m_data[i];
			}
			std::cout << "operator= \n";

			return *this;
		}
	};

	class NoCopy
	{
	private:
		int m_num;
	public:
		NoCopy(int num) :
			m_num(num)
		{
			assert(num != 0);
		}

		//阻止隐转
		NoCopy(const char) = delete;
		//阻止直接赋值
		NoCopy(const NoCopy&) = delete;
		//阻止=操作符
		NoCopy operator=(const NoCopy&) = delete;
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
