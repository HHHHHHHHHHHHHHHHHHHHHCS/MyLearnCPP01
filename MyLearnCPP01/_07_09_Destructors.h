#pragma once
#include <cassert>
#include <iostream>

class _07_09_Destructors
{
public:
	static void Test();
	static void Test01();
	static void Test02();

	class IntArray
	{
	private:
		int* arr;
		int len;
	public:
		IntArray(int length)
		{
			assert(length > 0);
			arr = new int[length];
			len = length;
		}

		~IntArray()
		{
			delete[] arr;
			std::cout << "DELETE" << std::endl;
		}

		void SetValue(int index, int value) { arr[index] = value; }
		int GetValue(int index) { return arr[index]; }
		int GetLength() { return len; }
	};


	class Simple
	{
	private:
		int m_nID;

	public:
		Simple(int nID)
		{
			std::cout << "Constructing Simple " << nID << '\n';
			m_nID = nID;
		}

		~Simple()
		{
			std::cout << "Destructing Simple" << m_nID << '\n';
		}

		int getID() { return m_nID; }
	};
};
