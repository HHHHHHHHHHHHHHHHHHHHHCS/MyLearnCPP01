#pragma once

class _08_09_OverloadingTypecasts
{
public:
	class Cents
	{
	private:
		int cents;
	public:
		Cents(int _cents = 0)
		{
			cents = _cents;
		}

		operator int() const
		{
			return cents;
		}

		operator double() const
		{
			return cents;
		}

		int GetCents() const
		{
			return cents;
		}

		void SetCents(int _cents)
		{
			cents = _cents;
		}
	};

	class Dollars
	{
	private:
		int m_dollars;
	public:
		Dollars(int dollars = 0)
		{
			m_dollars = dollars;
		}

		operator Cents() const { return Cents(m_dollars * 100); }
	};

	static void Test();
	static void CoutInt(int i);
	static void CoutDouble(double i);
	static void Test01();
	static void Test02();
	static void Test03();
};
