#pragma once
#include <ostream>

class _09_04_Dpendencies
{
public:
	//依赖和关联的区别
	//关联是双向的  双方可以互相知道
	//依赖基本是单项的 而且被依赖对象基本都是实例化了的  比如这里的ostream

	class Point
	{
	private:
		double m_x, m_y, m_z;
	public:
		Point(double x = 0.0, double y = 0.0, double z = 0.0)
			: m_x(x), m_y(y), m_z(z)
		{
		}

		friend std::ostream& operator<<(std::ostream& out, const Point& point)
		{
			out << "Point(" << point.m_x << " , " << point.m_y << " , " << point.m_z << ")";
			return out;
		}
	};

	static void Test();
};
