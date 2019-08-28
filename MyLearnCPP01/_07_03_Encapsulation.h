#pragma once

class _07_03_Encapsulation
{
public:
	class Cls
	{
	private:
		int len;
		int arr[10];
	public:
		Cls();
		int GetValue(int index);
		void SetValue(int index, int val);
	};

	static void Test();
	static void Test01();
};
