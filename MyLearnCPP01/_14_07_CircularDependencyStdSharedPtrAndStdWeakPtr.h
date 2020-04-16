#pragma once
#include <string>
#include <iostream>

class _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr
{
public:
	class Person
	{
	private:
		std::string m_name;
	public:
		std::shared_ptr<Person> partner;


		Person(const std::string& name): m_name(name)
		{
			std::cout << m_name << " Created\n";
		}

		~Person()
		{
			std::cout << m_name << " Destroyed\n";
		}

		friend bool MakePartner(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2)
		{
			if (!p1 || !p2)
			{
				return false;
			}

			p1->partner = p2;
			p2->partner = p1;

			std::cout << p1->m_name << " make partnered with " << p2->m_name << '\n';
			return true;
		}
	};

	static void Test();
	static void Test01();
	static void Test02();


	class WeakPerson
	{
		std::string m_name;
		std::weak_ptr<WeakPerson> m_partner; // note: This is now a std::weak_ptr

	public:

		WeakPerson(const std::string &name) : m_name(name)
		{
			std::cout << m_name << " created\n";
		}
		~WeakPerson()
		{
			std::cout << m_name << " destroyed\n";
		}

		friend bool PartnerUp(std::shared_ptr<WeakPerson> &p1, std::shared_ptr<WeakPerson> &p2)
		{
			if (!p1 || !p2)
				return false;

			p1->m_partner = p2;
			p2->m_partner = p1;

			std::cout << p1->m_name << " is now partnered with " << p2->m_name << "\n";

			return true;
		}

		const std::shared_ptr<WeakPerson> GetPartner() const { return m_partner.lock(); } // use lock() to convert weak_ptr to shared_ptr
		const std::string& GetName() const { return m_name; }
	};


	static void Test03();
	static void Test04();

};
