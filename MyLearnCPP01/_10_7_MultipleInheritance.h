#pragma once
#include <string>
#include <iostream>

class _10_7_MultipleInheritance
{
public:
	class Person
	{
	private:
		std::string m_name;
		int m_age;
	public:
		Person(std::string name, int age)
			: m_name(name), m_age(age)
		{
		}

		std::string GetName() { return m_name; }
		int GetAge() { return m_age; }
	};

	class Employee
	{
	private:
		std::string m_employer;
		double m_wage;

	public:
		Employee(std::string employer, double wage)
			: m_employer(employer), m_wage(wage)
		{
		}

		std::string GetEmployer() { return m_employer; }
		double GetWage() { return m_wage; }
	};

	class Teacher : public Person, public Employee
	{
	private:
		int m_teachesGrade;
	public:
		Teacher(std::string name, int age, std::string employer, double wage, int teachesGrade)
			: Person(name, age), Employee(employer, wage), m_teachesGrade(teachesGrade)
		{
		}
	};

	//-------------------------------------------------

	class USBDevice
	{
	private:
		long m_id;

	public:
		USBDevice(long id)
			: m_id(id)
		{
		}

		long getID() { return m_id; }
	};

	class NetworkDevice
	{
	private:
		long m_id;

	public:
		NetworkDevice(long id)
			: m_id(id)
		{
		}

		long GetID() { return m_id; }
	};

	class WirelessAdapter : public USBDevice, public NetworkDevice
	{
	public:
		WirelessAdapter(long usbId, long networkId)
			: USBDevice(usbId), NetworkDevice(networkId)
		{
		}
	};


	//-------------------------------------------------


	class PoweredDevice
	{
	protected:
		int x;
		PoweredDevice(int _x)
		{
			x = _x;
		}
	};

	class Scanner : public PoweredDevice
	{
	public:
		Scanner(int x):PoweredDevice(x)
		{
			
		}
	};

	class Printer : public PoweredDevice
	{
	public:
		Printer(int x) :PoweredDevice(x)
		{

		}
	};

	class Copier : public Scanner, public Printer
	{
	public:
		Copier(int x)
			:Scanner(x+2),Printer(x+3)
		{
			
		}

		void GetValue()
		{
			std::cout << Scanner::x<<' '<< Printer ::x<<std::endl;
		}
	};


	static void Test();
	static void Test01();
	static void Test02();
};
