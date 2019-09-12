#pragma once
#include <array>

class _07_12_StaticMemberVariables
{
public:
	class GenID
	{
	public:
		static int autoID;
		static int staticInt;
		static const int SCInt = 4;
		static constexpr int SCeInt = 5;
		//constexpr 支持表达式初始化
		static constexpr  std::array<int, 3> s_array = { 1,2,3 }; 

		int publicInt;

		GenID()
		{
			autoID++;
		}

		GenID(int _val):GenID()
		{
			publicInt = _val;
		}

		int DoAdd()
		{
			static int funcID = 0;
			return ++funcID;
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
