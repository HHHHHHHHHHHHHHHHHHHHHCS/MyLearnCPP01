#include "_08_05_OverloadingComparisonOperators.h"
#include <iostream>

void _08_05_OverloadingComparisonOperators::Test()
{
	Test01();
}

bool operator ==(const _08_05_OverloadingComparisonOperators::Time& c1,
                 const _08_05_OverloadingComparisonOperators::Time& c2)
{
	return c1.hour == c2.hour && c1.min == c2.min && c1.second == c2.second;
}

bool operator !=(const _08_05_OverloadingComparisonOperators::Time& c1,
                 const _08_05_OverloadingComparisonOperators::Time& c2)
{
	return c1.hour != c2.hour || c1.min != c2.min || c1.second != c2.second;
}

bool operator >(const _08_05_OverloadingComparisonOperators::Time& c1,
                const _08_05_OverloadingComparisonOperators::Time& c2)
{
	if (c1.hour > c2.hour)
		return true;
	if (c1.min > c2.min)
		return true;
	if (c1.second > c2.second)
		return true;
	return false;
}

bool operator >=(const _08_05_OverloadingComparisonOperators::Time& c1,
                 const _08_05_OverloadingComparisonOperators::Time& c2)
{
	if (c1.hour >= c2.hour)
		return true;
	if (c1.min >= c2.min)
		return true;
	if (c1.second >= c2.second)
		return true;
	return false;
}

bool operator <(const _08_05_OverloadingComparisonOperators::Time& c1,
                const _08_05_OverloadingComparisonOperators::Time& c2)
{
	if (c1.hour < c2.hour)
		return true;
	if (c1.min < c2.min)
		return true;
	if (c1.second < c2.second)
		return true;
	return false;
}

bool operator <=(const _08_05_OverloadingComparisonOperators::Time& c1,
                 const _08_05_OverloadingComparisonOperators::Time& c2)
{
	if (c1.hour <= c2.hour)
		return true;
	if (c1.min <= c2.min)
		return true;
	if (c1.second <= c2.second)
		return true;
	return false;
}

void _08_05_OverloadingComparisonOperators::Test01()
{
	_08_05_OverloadingComparisonOperators::Time time1{ 6,2,3 };
	_08_05_OverloadingComparisonOperators::Time time2{ 1,2,7 };
	_08_05_OverloadingComparisonOperators::Time time3{ 1,4,7 };
	_08_05_OverloadingComparisonOperators::Time time4{ 1,2,7 };

	std::cout << (time1 == time2)<<'\n';
	std::cout << (time2 != time4) << '\n';
	std::cout << (time1 >= time4) << '\n';
	std::cout << (time2 <= time4) << '\n';

}
