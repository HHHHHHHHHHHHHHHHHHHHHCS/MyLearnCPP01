#pragma once

class _07_01_ClassesAndClassMembers
{
public:
	struct DateStruct
	{
		int year;
		int month;
		int day;
	};

	class _07_01_ClassesAndClassMembers_Class
	{
	public:
		int year;
		int month;
		int day;
		void Print() const;
	};

	static void Test();
	static void Test01();
	static void Print(DateStruct& date);
	static void Test02();

};
