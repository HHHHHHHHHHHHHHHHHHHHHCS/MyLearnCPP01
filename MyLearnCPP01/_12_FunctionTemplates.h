#pragma once

class _12_FunctionTemplates
{
public:
	template <typename  T0>
	static const T0& Max(const T0& x, const T0& y)
	{
		return x > y ? x : y;
	}

	template <typename  T1,typename T2>
	static bool MoreThan(const T1& x,const T2& y)
	{
		return x > y;
	}



	static void Test();
	static void Test01();
};
