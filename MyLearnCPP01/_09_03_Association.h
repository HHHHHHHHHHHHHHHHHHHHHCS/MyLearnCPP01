#pragma once

#include <string>
#include <vector>

class _09_03_Association
{
public:

	class Patient;

	class Doctor
	{
	private:
		std::string m_name{};
		std::vector<Patient *> m_patients{};

	public:
		Doctor(std::string name)
			: m_name(name)
		{
		}

		void AddPatient(Patient* pat)
		{
			m_patients.push_back(pat);

			pat->AddDoctor(this);
		}

		friend std::ostream& operator<<(std::ostream& out, const Doctor& doc)
		{
			unsigned int length = static_cast<unsigned int>(doc.m_patients.size());

			if (length == 0)
			{
				out << doc.m_name << " has no patients right now";
				return out;
			}

			out << doc.m_name << " is seeing patients:";

			for (unsigned int count = 0; count < length; count ++)
			{
				out << doc.m_patients[count]->GetName() << ' ';
			}

			return out;
		}

		std::string GetName() const { return m_name; }
	};

	class Patient
	{
	private:
		std::string m_name{};
		std::vector<Doctor *> m_doctors{};

		void AddDoctor(Doctor* doc)
		{
			m_doctors.push_back(doc);
		}

	public:

		Patient(std::string name)
			: m_name(name)
		{
		}

		friend std::ostream& operator<<(std::ostream& out, const Patient& pat)
		{
			unsigned int length = static_cast<unsigned int>(pat.m_doctors.size());

			if (length == 0)
			{
				out << pat.m_name << " has no patients right now";
				return out;
			}

			out << pat.m_name << " is seeing patients:";

			for (unsigned int count = 0; count < length; count++)
			{
				out << pat.m_doctors[count]->GetName() << ' ';
			}

			return out;
		}

		std::string GetName() const { return m_name; }

		//友元函数 联系私有变量
		friend void Doctor::AddPatient(Patient* pat);
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
