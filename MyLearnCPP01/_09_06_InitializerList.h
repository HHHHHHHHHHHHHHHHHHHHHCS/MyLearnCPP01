#pragma once
#include <initializer_list>
#include <cassert>

class _09_06_InitializerList
{
public:
	class IntArray
	{
	private:
		int m_length;
		int* m_data{};

	public:
		IntArray()
		{
		}

		IntArray(int length)
			: m_length(length)
		{
			m_data = new int[length];
		}

		IntArray(const std::initializer_list<int>& list)
			: IntArray(static_cast<int>(list.size()))
		{
			int count = 0;
			for (auto& element : list)
			{
				m_data[count] = element;
				++count;
			}
		}

		~IntArray()
		{
			delete[] m_data;
		}

		IntArray(const IntArray&) = delete;
		IntArray& operator=(const IntArray&) = delete;

		int& operator[](int index)
		{
			assert(index >= 0 && index < m_length);
			return m_data[index];
		}

		int GetLength() { return m_length; }
	};

	static void Test();
};
