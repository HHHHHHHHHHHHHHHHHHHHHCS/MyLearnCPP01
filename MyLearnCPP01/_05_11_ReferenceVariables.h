#pragma once

class _05_11_ReferenceVariables
{
	struct Something
	{
		int value1;
		float value2;
	};

	struct Other
	{
		Something something;
		int otherValue;
	};

	Other other;

public:
	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
	static void Test04_ChangeN(int& ref);
	static void Test05();
	static void Test05_PrintElements_Right(int (&arr)[6]);
	static void Test05_PrintElements_Error(int [6]);
	static void Test06();
	static void Test07();
};
