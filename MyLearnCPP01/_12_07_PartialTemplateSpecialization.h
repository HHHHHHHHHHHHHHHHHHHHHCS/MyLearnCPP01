#pragma once
#include <iostream>

template <class T, int size> // size is the expression parameter
class _12_07_PartialTemplateSpecialization_StaticArray
{
private:
	// The expression parameter controls the size of the array
	T m_array[size]{};

public:
	T* GetArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}

	void ThePrint()
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << m_array[i] << ' ';
		std::cout << '\n';
	}
};

template <int size> // size is the expression parameter
class _12_07_PartialTemplateSpecialization_StaticArray<double, size>
{
private:
	// The expression parameter controls the size of the array
	double m_array[size]{};

public:
	double* GetArray() { return m_array; }

	double& operator[](int index)
	{
		return m_array[index];
	}
	void ThePrint()
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << std::scientific << m_array[i] << ' ';
		std::cout << '\n';
	}
};

template <typename T, int size>
void _12_07_PartialTemplateSpecialization_Print(_12_07_PartialTemplateSpecialization_StaticArray<T, size> &array)
{
	for (int count{ 0 }; count < size; ++count)
		std::cout << array[count] << ' ';
}

// Override print() for fully specialized StaticArray<char, 14>
template <int size>
void _12_07_PartialTemplateSpecialization_Print(_12_07_PartialTemplateSpecialization_StaticArray<char, size> &array)
{
	for (int count{ 0 }; count < size; ++count)
		std::cout << array[count];
}

template <class T, int size> // size is the expression parameter
class _12_07_PartialTemplateSpecialization_StaticArray_Base
{
protected:
	// The expression parameter controls the size of the array
	T m_array[size]{};

public:
	T* GetArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}
	virtual void Print()
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << m_array[i];
		std::cout << '\n';
	}

	virtual ~_12_07_PartialTemplateSpecialization_StaticArray_Base()
	{
		
	};
};


template <class T, int size> // size is the expression parameter
class _12_07_PartialTemplateSpecialization_NewStaticArray 
	: public _12_07_PartialTemplateSpecialization_StaticArray_Base<T, size>
{
public:
};

template <int size> // size is the expression parameter
class _12_07_PartialTemplateSpecialization_NewStaticArray<double, size> 
: public _12_07_PartialTemplateSpecialization_StaticArray_Base<double, size>
{
public:

	virtual void Print() override
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << std::scientific << this->m_array[i] << ' ';
		// note: The this-> prefix in the above line is needed.
		// See https://stackoverflow.com/a/6592617 or https://isocpp.org/wiki/faq/templates#nondependent-name-lookup-members for more info on why.
		std::cout << '\n';
	}
};


class _12_07_PartialTemplateSpecialization
{
public:
	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();

};
