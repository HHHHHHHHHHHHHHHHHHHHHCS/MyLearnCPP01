#pragma once

template <class  T, int size>
class  _12_04_TemplateNonTypeParameters_StaticArray
{
private:
	T m_array[size];

public:
	T* GetArray();

	T& operator[](int index)
	{
		return m_array[index];
	}
};

template <class T, int size>
T* _12_04_TemplateNonTypeParameters_StaticArray<T, size>::GetArray()
{
	return m_array;
}

class _12_04_TemplateNonTypeParameters
{
public:
	static void Test();
	static void Test01();
};
