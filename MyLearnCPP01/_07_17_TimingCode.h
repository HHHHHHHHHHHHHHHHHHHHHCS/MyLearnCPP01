#pragma once
#include <chrono>

class _07_17_TimingCode
{
public:
	class Timer
	{
	private:
		//类型别名
		using clock_t = std::chrono::high_resolution_clock;
		//如果想表示1/5，那么可以这样写std::ratio<1, 5>。
		//回想我们在学习std::chrono::duration中遇到到的milli的定义：
		//typedef ratio<1, 1000> milli; ，表示一千分之一，因为约定了基本计算单位是秒，所以milli表示一千分之一秒。
		using second_t = std::chrono::duration<double, std::ratio<1>>;

		std::chrono::time_point<clock_t> m_beg;
	public:
		Timer():m_beg(clock_t::now())
		{
			
		}

		void Reset()
		{
			m_beg = clock_t::now();
		}

		double Elapsed() const
		{
			return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
};
