#pragma once
#include <string>
#include <iostream>

class _10_01_BasicInheritance
{
public:
	class Person
	{
	public:
		std::string m_name;
		int m_age;

		std::string GetName() const { return m_name; }
		int GetAge() const { return m_age; }

		Person(std::string name = "", int age = 0)
			: m_name(name), m_age(age)
		{
		}
	};

	class BaseballPlayer : public Person
	{
	public:
		double m_battingAverage;
		int m_homeRuns;

		BaseballPlayer(double battleAverage = 0.0, int homeRuns = 0)
			: m_battingAverage(battleAverage), m_homeRuns(homeRuns)
		{
		}
	};

	class Employee : public Person
	{
	public:
		double m_hourlySalary;
		long m_employeeID;

		Employee(double hourlySalary = 0.0, long employeeID = 0)
			: m_hourlySalary(hourlySalary), m_employeeID(employeeID)
		{
		}

		void PrintNameAndSalary() const
		{
			std::cout << m_name << ": " << m_hourlySalary << '\n';
		}
	};

	class  Supervisor:public Employee
	{
	public:
		long m_overseesIDs[5];

		Supervisor()
		{
			
		}
	};

	static void Test();
};
