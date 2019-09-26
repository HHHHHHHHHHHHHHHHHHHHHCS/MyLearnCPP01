#pragma once
#include <iostream>

class _08_02_OverloadingIOOperators
{
public:
	class Point
	{
	private:
		double x, y, z;
	public:
		Point(double _x = 0.0, double _y = 0.0, double _z = 0.0): x(_x), y(_y), z(_z)
		{
		}

		double GetX() { return x; }
		double GetY() { return y; }
		double GetZ() { return z; }

		void Print()
		{
			std::cout << "Point->(x:" << x << " y:" << y << " z:" << z << ")\n";
		}

		friend std::ostream& operator<<(std::ostream& out, const Point& point)
		{
			out << "Point->(x:" << point.x << " y:" << point.y << " z:" << point.z << ")\n";
			return out;
		}

		friend std::istream& operator>>(std::istream& in, Point& point)
		{
			in >> point.x;
			in >> point.y;
			in >> point.z;
			return in;
		}
	};

	static void Test();
	static void Test01();
};
