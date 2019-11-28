#pragma once
#include <string>
#include <iostream>

class _08_12_ConvertingConstructorsExplicitDelete
{
public:

	class MyString
	{
	private:
		std::string m_string;

	public:
		//MyString(char) = delete;

		/*explicit*/ MyString(int x)
		{
			m_string.resize(x);
			m_string = "asd";
			std::cout << "int" << std::endl;
		}

		MyString(const char* string)
		{
			m_string = string;
			std::cout << "const char *string" << std::endl;
		}

		/*explicit*/  MyString(double d)
		{
			m_string = std::to_string(d);
			std::cout << "double" << std::endl;
		}


		friend std::ostream& operator<<(std::ostream& out, const MyString& s)
		{
			out << s.m_string << '\n';
			return out;
		}
	};

	static void Test();
	static void Test01();

	static void PrintString(const MyString& s)
	{
		std::cout << s;
	}
};
