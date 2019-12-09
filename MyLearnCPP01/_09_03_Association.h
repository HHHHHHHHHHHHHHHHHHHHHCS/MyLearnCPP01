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

	//---------------------
	class Course
	{
	private:
		std::string m_name;
		Course* m_prerequisite;
	public:
		Course(std::string name, Course* prerequisite = nullptr)
			: m_name(name), m_prerequisite(prerequisite)
		{
		}
	};

	//--------------------
	class Car
	{
	private:
		std::string m_name;
		int m_id;

	public:
		Car(std::string name, int id)
			: m_name(name), m_id(id)
		{
		}

		std::string GetName() const { return m_name; }

		int GetID() const
		{
			return m_id;
		}
	};

	class CarLot
	{
	private:
	public:
		static Car s_carLot[4];


		CarLot() = delete;

		static Car* GetCar(int id)
		{
			for (int count = 0; count < 4; count++)
			{
				if (s_carLot[count].GetID() == id)
					return &(s_carLot[count]);
			}
			return nullptr;
		}
	};

	class Driver
	{
	private:
		std::string m_name;
		int m_carID;

	public :
		Driver(std::string name, int carID)
			: m_name(name), m_carID(carID)
		{
		}

		std::string GetName() { return m_name; }
		int GetCarID() { return m_carID; }
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
