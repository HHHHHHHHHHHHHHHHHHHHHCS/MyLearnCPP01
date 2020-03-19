#pragma once
#include <assert.h>

//因为要把GetLength 拿出来 所以写在了外面  方便方法实现

template <class T>
class _12_03_TemplateClasses_Array
{
private:
	int m_length;
	T* m_data;

public:
	_12_03_TemplateClasses_Array()
	{
		m_length = 0;
		m_data = nullptr;
	}

	_12_03_TemplateClasses_Array(int length)
	{
		assert(length >= 0);
		m_data = new T[length];
		m_length = length;
	}

	~_12_03_TemplateClasses_Array()
	{
		delete[] m_data;
	}

	void Erase()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	//数组的长度始终是整数 他不依赖与模版的类型
	//所以在下面完成
	int GetLength() const;
};

//类外部定义 需要自己的模版
//typename 和 class 的作用完全一样
//外部实现最后定义在头文件里面 如果在CPP里面实现 如果别的CPP调用会出现方法未实现
//或者写一个name.inl 的文件 作用是从name.h头文件末尾 连接上去 
//或者写一个中介类  把.h 和 .cpp 都包括进来 (C++11 才行)
//	然后实例化模版  这样从别的地方链接到 都能调用到  这种方法效率更高 但是维护很累
//	因为 强制显式实例化  这样程序中只会出现一次  编译也会只进行一次 减少编译时间
/*
#include "Array.h"
#include "Array.cpp" // we're breaking best practices here, but only in this one place

// #include other .h and .cpp template definitions you need here

template class Array<int>; // Explicitly instantiate template Array<int>
template class Array<double>; // Explicitly instantiate template Array<double>
*/

template <typename T>
int _12_03_TemplateClasses_Array<T>::GetLength() const { return m_length; }

class _12_03_TemplateClasses
{
public:
	static void Test();
	static void Test01();
};
