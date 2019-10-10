#pragma once

class _08_05_OverloadingComparisonOperators
{
public:
	class  Time
	{
	private:
		int hour;
		int min;
		float second;
	public:
		Time(int hour, int min, float second)
			: hour(hour),
			  min(min),
			  second(second)
		{
		}

		Time() = default;

		friend  bool operator >(const Time &c1, const Time &c2);
		friend  bool operator >=(const Time &c1, const Time &c2);

		friend  bool operator <(const Time &c1, const Time &c2);
		friend  bool operator <=(const Time &c1, const Time &c2);

		friend  bool operator !=(const Time &c1, const Time &c2);
		friend  bool operator ==(const Time &c1, const Time &c2);
	};

	static void Test();
	static void Test01();
};
