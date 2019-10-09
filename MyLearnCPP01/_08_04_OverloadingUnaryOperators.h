#pragma once

class _08_04_OverloadingUnaryOperators
{
public:
	class Point
	{
	private:
		double x, y, z;
	public:
		Point(double _x = 0.0, double _y = 0.0, double _z = 0.0) :
			x(_x), y(_y), z(_z)
		{
		}

		Point operator-() const;
		Point operator+() const;
		bool operator! () const;

		double GetX() const { return x; }
		double GetY() const { return y; }
		double GetZ() const { return z; }

	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
