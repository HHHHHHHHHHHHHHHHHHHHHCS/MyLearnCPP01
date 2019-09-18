#pragma once
#include <iostream>

class _07_14_FriendFunctionsClasses
{
public:


	static void Test();

	static void Test01();

	class Accumulator
	{
	private:
		int m_value;
	public:
		Accumulator() { m_value = 0; }
		void Add(int value) { m_value += value; }

		friend void Reset(Accumulator& accumulator);
		friend int Get(Accumulator& accumulator);
	};

	static void Test02();

	//这里提前申明了一个类
	class Humidity;


	class Temperature
	{
	private:
		int m_temp;
	public:
		Temperature(int temp = 0) { m_temp = temp; }

		//因为是涉及到两个类 所以两个类的 都要有友元
		friend void PrintWeather(const Temperature& temperature, const Humidity& humidity);
	};

	class Humidity
	{
	private:
		int m_humidity;
	public:
		Humidity(int humidity = 0) { m_humidity = humidity; }

		friend void PrintWeather(const Temperature& temperature, const Humidity& humidity);
	};

	static void Test03();

	class Storage; // forward declaration for class Storage

	class Display
	{
	private:
		bool m_displayIntFirst;

	public:
		Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }

		void displayItem(const Storage& storage) const; // forward declaration above needed for this declaration line
		friend void displayItem(const Storage& storage);
	};

	class Storage // full definition of Storage class
	{
	private:
		int m_nValue;
		double m_dValue;
	public:
		Storage(int nValue, double dValue)
		{
			m_nValue = nValue;
			m_dValue = dValue;
		}

		// Make the Display::displayItem member function a friend of the Storage class (requires seeing the full declaration of class Display, as above)
		//有元申明
		friend void Display::displayItem(const Storage& storage) const;
	};
};
