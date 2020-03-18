#pragma once
#include <ostream>

class _12_02_FunctionTemplateInstances
{
public:
	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents)
			: m_cents{cents}
		{
		}

		friend std::ostream& operator <<(std::ostream& os, const Cents& x)
		{
			os << x.m_cents;
			return os;
		}

		friend bool operator >(const Cents& x, const Cents& y)
		{
			return x.m_cents >= y.m_cents;
		}

		Cents& operator +=(const Cents& cents)
		{
			m_cents += cents.m_cents;
			return *this;
		}

		Cents& operator /=(int value)
		{
			m_cents /= value;
			return *this;
		}
	};

	template <typename T>
	static const T& Max(const T& x, const T& y)
	{
		return (x > y) ? x : y;
	}

	template <class T>
	static T Average(T* array, int length)
	{
		T sum(0);

		for (int count{0}; count < length; ++count)
			sum += array[count];

		sum /= length;
		return sum;
	}


	static void Test();
	static void Test01();
	static void Test02();
};
