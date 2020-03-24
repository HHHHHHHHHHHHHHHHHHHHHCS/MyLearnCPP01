#pragma once

class _12_06_ClassTemplateSpecialization
{
public:
	template <class T>
	class Storage8
	{
	private:
		T m_arr[8];

	public:
		void Set(int index, const T& val)
		{
			m_arr[index] = val;
		}

		const T& Get(int index)
		{
			return m_arr[index];
		}
	};

	template <>
	class Storage8<bool>
	{
	private:
		unsigned char m_data;

	public:
		void Set(int index, bool val)
		{
			unsigned char mask = 1 << index;
			if (val)
				m_data |= mask;
			else
				m_data &= ~mask;
		}

		const bool Get(int index)
		{
			unsigned char mask = 1 << index;

			return m_data & mask;;
		}
	};

	static void Test();
	static void Test01();;
};
