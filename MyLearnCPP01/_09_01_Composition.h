#pragma once
#include <ostream>
#include <string>

class _09_01_Composition
{
public:
	class Point2D
	{
	private:
		int m_x;
		int m_y;

	public:
		Point2D()
			: m_x(0), m_y(0)
		{
		}

		Point2D(int x, int y)
			: m_x(x), m_y(y)
		{
		}


		friend std::ostream& operator <<(std::ostream& out, const Point2D& point)
		{
			out << "(" << point.m_x << "," << point.m_y << ")";
			return out;
		}

		void SetPoint(int x, int y)
		{
			m_x = x;
			m_y = y;
		}
	};

	class Creature
	{
	private:
		std::string m_name;
		Point2D m_location;

	public:
		Creature(const std::string& name, const Point2D& location)
			: m_name(name), m_location(location)
		{
		}

		friend std::ostream& operator<<(std::ostream& out, const Creature& creature)
		{
			out << creature.m_name << " is at " << creature.m_location << '\n';
			return out;
		}

		void MoveTo(int x, int y)
		{
			m_location.SetPoint(x, y);
		}
	};

	static void Test();
};
