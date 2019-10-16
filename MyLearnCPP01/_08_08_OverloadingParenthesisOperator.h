#pragma once

#include <cassert>

class _08_08_OverloadingParenthesisOperator
{
public:
	class Matrix
	{
	private:
		double data[4][4];
		double temp = 0.0;
	public:
		Matrix()
		{
			for (int row = 0; row < 4; ++row)
			{
				for (int col = 0; col < 4; ++col)
				{
					data[row][col] = 0.0;
				}
			}
		}

		double operator()(double x)
		{
			return (temp += x);
		}

		double& operator()(int row, int col)
		{
			assert(col >= 0 && col < 4);
			assert(row >= 0 && row < 4);

			return data[row][col];
		}

		const double& operator()(int row, int col) const
		{
			assert(col >= 0 && col < 4);
			assert(row >= 0 && row < 4);

			return data[row][col];
		}

		void operator()()
		{
			for (int row = 0; row < 4; ++row)
			{
				for (int col = 0; col < 4; ++col)
				{
					data[row][col] = 0.0;
				}
			}
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
