#pragma once
#include <iostream>

class _07_07_NonStaticMemberInitialization
{
public:
	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();


	class Cls01
	{
	private:
		double m_length = 1.0;
		double m_width = 1.0;

	public:
		Cls01() //无参数 默认构造函数
		{
		}

		void Print()
		{
			std::cout << "length: " << m_length << ", width: " << m_width << '\n';
		}
	};

	class Cls02
	{
	private:
		double m_length = 1.0;
		double m_width = 1.0;

	public:
		//有参数的构造函数
		Cls02(double length, double width)
			: m_length(length), m_width(width)
		{
		}

		void Print()
		{
			std::cout << "length: " << m_length << ", width: " << m_width << '\n';
		}
	};

	class Cls03
	{
	private:
		std::string m_color;
		double m_radius;

	public://N个构造函数
		Cls03()
		{
			m_color = "black";
			m_radius = 10.0;
		}

		Cls03(const std::string &color)
		{
			m_color = color;
			m_radius = 10.0;
		}

		Cls03(double radius)
		{
			m_color = "black";
			m_radius = radius;
		}

		Cls03(const std::string &color, double radius)
		{
			m_color = color;
			m_radius = radius;
		}

		void Print()
		{
			std::cout << "color: " << m_color.c_str() << ", radius: " << m_radius << '\n';
		}
	};


};
