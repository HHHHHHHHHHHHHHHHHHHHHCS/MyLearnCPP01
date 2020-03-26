#pragma once
#include <iostream>

template <class T>
class _12_08_PartialTemplateSpecializationPointers_Storage
{
private:
	T m_val;
public :
	_12_08_PartialTemplateSpecializationPointers_Storage(T val)
	{
		m_val = val;
	}

	~_12_08_PartialTemplateSpecializationPointers_Storage()
	{
	}

	void Print()
	{
		std::cout << m_val << '\n';
	}
};


template <typename T>
class _12_08_PartialTemplateSpecializationPointers_Storage<T*> // this is a partial-specialization of Storage that works with pointer types
{
private:
	T* m_val;
public:
	_12_08_PartialTemplateSpecializationPointers_Storage(T* value) // for pointer type T
	{
		// For pointers, we'll do a deep copy
		m_val = new T(*value); // this copies a single value, not an array
	}

	~_12_08_PartialTemplateSpecializationPointers_Storage()
	{
		delete m_val; // so we use scalar delete here, not array delete
	}

	void Print()
	{
		std::cout << *m_val << '\n';
	}
};


template <>
_12_08_PartialTemplateSpecializationPointers_Storage<char*>
::_12_08_PartialTemplateSpecializationPointers_Storage(char* val)
{
	int length = 0;
	while (val[length] != '\0')
		++length;
	++length;

	m_val = new char[length];

	for (int i = 0; i < length; ++i)
		m_val[i] = val[i];
}

template <>
void _12_08_PartialTemplateSpecializationPointers_Storage<char*>
::Print()
{
	std::cout << m_val;
}

template <>
_12_08_PartialTemplateSpecializationPointers_Storage<char*>
::~_12_08_PartialTemplateSpecializationPointers_Storage()
{
	delete[] m_val;
}


class _12_08_PartialTemplateSpecializationPointers
{
public:
	static void Test();
	static void Test01();
};
