#pragma once
#include <cassert>
#include <ostream>

class _08_14_ShallowSeepCopying
{
public:
	class MyString
	{
	public:
		char* m_data;
		int m_length;
	public:
		MyString(const char* src = "")
		{
			m_length = static_cast<int>(std::strlen(src)) + 1;

			m_data = const_cast<char*>(src);
		}

		MyString(const MyString& src)
		{
			m_length = src.m_length;

			m_data = src.m_data;
		}


		static MyString DeepCopy(const MyString& src)
		{
			MyString copy;

			copy.m_length = src.m_length;


			if (src.m_data)
			{
				copy.m_data = new char[src.m_length];

				for (int i{0}; i < src.m_length; i++)
				{
					copy.m_data[i] = src.m_data[i];
				}
			}
			else
			{
				copy.m_data = nullptr;
			}

			return copy;
		}

		char* GetString() { return m_data; }
		int GetLength() { return m_length; };


		friend std::ostream& operator<<(std::ostream& out, const MyString& str)
		{
			out << str.m_data << '\n';
			return out;
		}
	};

	static void Test();
	static void Test01();
};
