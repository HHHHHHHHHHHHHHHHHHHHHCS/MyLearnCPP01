#pragma once
#include <ios>
#include <iostream>
#include <cstring>

template <class T>
class _12_05_FunctionTemplateSpecialization_Storage
{
private:
	T m_val;
public:
	_12_05_FunctionTemplateSpecialization_Storage(T val)
	{
		m_val = val;
	}

	~_12_05_FunctionTemplateSpecialization_Storage()
	{
	}

	void Print()
	{
		std::cout << m_val << '\n';
	}
};

template <>
void _12_05_FunctionTemplateSpecialization_Storage<double>::Print()
{
	std::cout << "double:" << std::scientific << m_val << '\n';
}

template <>
_12_05_FunctionTemplateSpecialization_Storage<char*>::_12_05_FunctionTemplateSpecialization_Storage(char* val)
{
	//因为是指针直接赋值是浅拷贝
	//所以这里用模版特定化进行深拷贝
	/*
	int len = 0;
	while (val[len] != '\0')
	{
		++len;
	}

	++len; //给终止符号+1

	m_val = new char[len];

	for (int i = 0; i < len; ++i)
		m_val[i] = val[i];
	*/


	int len = static_cast<int>(strlen(val)) + 1;//终止符号
	m_val = new char[len]; 
	strcpy_s(m_val, len, val); //(dest,len,src)
}

template <>
_12_05_FunctionTemplateSpecialization_Storage<char*>::~_12_05_FunctionTemplateSpecialization_Storage()
{
	delete[] m_val;
}


class _12_05_FunctionTemplateSpecialization
{
public:


	static void Test();
	static void Test01();
	static void Test02();
};
