#pragma once
#include <string>
#include <iostream>

class _13_08_ExceptionDangersAndDownsides
{
public:
	class PersonException : public std::exception
	{
	public:
		std::string error;

		PersonException(std::string err)
		{
			error = err;
		}

		const char* what() const override { return error.c_str(); };
	};

	class Person
	{
	public:
		std::string name;
		int age;

		Person(std::string _name, int _age)
		{
			name = _name;
			age = _age;
			throw PersonException("test");
		}

		~Person()
		{
			std::cout << "~Person" << '\n';
		}
	};

	static void Test();
	static void Test01();
};
