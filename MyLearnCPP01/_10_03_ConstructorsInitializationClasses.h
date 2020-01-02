#pragma once
#include <iostream>
#include <string>
class _10_03_ConstructorsInitializationClasses
{
public:
	class Person
	{
	private:
		std::string m_name;
		int m_age;

	public:
		Person(const std::string& name = "", int age = 0)
			: m_name{ name }, m_age{ age }
		{
		}

		const std::string& GetName() const { return m_name; }
		int GetAge() const { return m_age; }

	};
	// BaseballPlayer publicly inheriting Person
	class BaseballPlayer : public Person
	{
	private:
		double m_battingAverage;
		int m_homeRuns;

	public:
		BaseballPlayer(const std::string& name = "", int age = 0,
			double battingAverage = 0.0, int homeRuns = 0)
			: Person{ name, age }, // call Person(const std::string&, int) to initialize these fields
			m_battingAverage{ battingAverage }, m_homeRuns{ homeRuns }
		{
		}

		double GetBattingAverage() const { return m_battingAverage; }
		int GetHomeRuns() const { return m_homeRuns; }
	};


	class A
	{
	public:
		A(int a)
		{
			std::cout << "A:" << a << '\n';
		}
	};

	class B : public A
	{
	public:
		B(int a, double b)
			: A{a}
		{
			std::cout << "B:" << b << '\n';
		}
	};

	class C:public B
	{
	public:
		C(int a,double b,char c)
			:B{a,b}
		{
			std::cout << "C:" << c << '\n';
		}
	};

	static void Test();
	static void Test01();
	static void Test02();

};
