#pragma once
#include <cassert>

class _09_05_Container
{
public:
	class IntArray
	{
	private:
		int m_length{};
		int* m_data;

	public:
		IntArray() = default;

		IntArray(int length):
			m_length{length}
		{
			assert(length >= 0);

			if (length > 0)
				m_data = new int[length]{};
		}

		~IntArray()
		{
		}

		void Erase()
		{
			delete[] m_data;


			m_data = nullptr;
			m_length = 0;
		}

		int& operator[](int index)
		{
			assert(index >= 0 && index < m_length);
			return m_data[index];
		}

		int GetLength() const
		{
			return m_length;
		}

		void Reallocate(int newLength)
		{
			Erase();

			if (newLength <= 0)
				return;

			m_data = new int[newLength];
			m_length = newLength;
		}

		void Resize(int newLength)
		{
			if (newLength == m_length)
				return;

			if (newLength <= 0)
			{
				Erase();
				return;
			}

			int* data{new int[newLength]};


			if (m_length > 0)
			{
				int elemCopy{(newLength > m_length) ? m_length : newLength};

				for (int index{0}; index < elemCopy; index++)
				{
					data[index] = m_data[index];
				}
			}

			delete[] m_data;

			m_data = data;
			m_length = newLength
		}
	};


	static void Test();
};
