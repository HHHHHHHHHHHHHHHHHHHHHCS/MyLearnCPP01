#pragma once
#include <string>

class _09_02_Aggregation
{
public:
	//跟 _09_01_Composition 相比  指针更像 可以 1对N  删除了父物体 指针还在不会跟着删除

	class Teacher
	{
	private:
		std::string m_name;
	public:
		Teacher(std::string name)
			: m_name(name)
		{
		}

		std::string GetName() { return m_name; }
	};

	class Department
	{
	public:
		Teacher* teacher;

	public:
		Department(Teacher* _t = nullptr)
			: teacher(_t)
		{
		}
	};


	static void Test();
};
