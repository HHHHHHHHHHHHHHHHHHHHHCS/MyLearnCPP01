#pragma once
#include <iostream>
#include <chrono>

class _14_03_MoveConstructorsAndMoveAssignment
{
public:
	class Timer
	{
	private:
		// Type aliases to make accessing nested type easier
		using clock_t = std::chrono::high_resolution_clock;
		using second_t = std::chrono::duration<double, std::ratio<1>>;

		std::chrono::time_point<clock_t> m_beg;

	public:
		Timer() : m_beg(clock_t::now())
		{
		}

		void reset()
		{
			m_beg = clock_t::now();
		}

		double elapsed() const
		{
			return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
		}
	};


	class Res
	{
	public:
		Res() { std::cout << "Res()\n"; }
		~Res() { std::cout << "~Res()\n"; }
	};

	static void Test();

	template <class T>
	class Auto_ptr1
	{
	private:
		T* m_ptr;
	public:
		Auto_ptr1(T* ptr = nullptr)
			: m_ptr(ptr)
		{
		}

		~Auto_ptr1()
		{
			delete m_ptr;
		}

		Auto_ptr1(const Auto_ptr1& a)
		{
			m_ptr = new T;
			*m_ptr = *a.m_ptr;
		}

		Auto_ptr1& operator=(const Auto_ptr1& a)
		{
			if (&a == this)
				return *this;

			delete m_ptr;

			m_ptr = new T;
			*m_ptr = *a.m_ptr;

			return *this;
		}

		T& operator*() const { return *m_ptr; }
		T* operator->() const { return m_ptr; }
		bool IsNull() const { return m_ptr == nullptr; }
	};

	static Auto_ptr1<Res> GenerateAutoPtr1()
	{
		Auto_ptr1<Res> res(new Res);
		return res; // this return value will invoke the copy constructor
	}

	static void Test01();


	template <class T>
	class Auto_ptr2
	{
	private:
		T* m_ptr;
	public:
		Auto_ptr2(T* ptr = nullptr)
			: m_ptr(ptr)
		{
		}

		~Auto_ptr2()
		{
			delete m_ptr;
		}

		Auto_ptr2(const Auto_ptr2& a)
		{
			m_ptr = new T;
			*m_ptr = *a.m_ptr;
		}

		//临时值构造函数
		Auto_ptr2(Auto_ptr2&& a)
			: m_ptr(a.m_ptr)
		{
			//如果资源a 超出范围 可能会析构资源
			//所以要被 a的指针 设置为 nullptr
			a.m_ptr = nullptr;
		}


		// 拷贝 会创建新的 
		// 而且需要深度拷贝
		Auto_ptr2& operator=(const Auto_ptr2& a)
		{
			// Self-assignment detection
			if (&a == this)
				return *this;

			// Release any resource we're holding
			delete m_ptr;

			// Copy the resource
			m_ptr = new T;
			*m_ptr = *a.m_ptr;

			return *this;
		}

		//&& 使用临时不会创建新的
		Auto_ptr2& operator=(Auto_ptr2&& a)
		{
			if (&a == this)
				return *this;

			delete m_ptr;

			m_ptr = a.m_ptr;
			//如果资源a 超出范围 可能会析构资源
			//所以要被 a的指针 设置为 nullptr
			a.m_ptr = nullptr;

			return *this;
		}

		T& operator*() const { return *m_ptr; }
		T* operator->() const { return m_ptr; }
		bool IsNull() const { return m_ptr == nullptr; }
	};

	static Auto_ptr2<Res> GenerateAutoPtr2()
	{
		Auto_ptr2<Res> res(new Res);
		return res; // this return value will invoke the copy constructor
	}

	static void Test02();

	template <class T>
	class Auto_ptr3
	{
		T* m_ptr;
	public:
		Auto_ptr3(T* ptr = nullptr)
			: m_ptr(ptr)
		{
		}

		~Auto_ptr3()
		{
			delete m_ptr;
		}

		//使用delete 强制删除拷贝赋值
		// Copy constructor -- no copying allowed!
		Auto_ptr3(const Auto_ptr3& a) = delete;

		//强制 使用移动赋值
		// Move constructor
		// Transfer ownership of a.m_ptr to m_ptr
		Auto_ptr3(Auto_ptr3&& a)
			: m_ptr(a.m_ptr)
		{
			a.m_ptr = nullptr;
		}

		// Copy assignment -- no copying allowed!
		Auto_ptr3& operator=(const Auto_ptr3& a) = delete;

		// Move assignment
		// Transfer ownership of a.m_ptr to m_ptr
		Auto_ptr3& operator=(Auto_ptr3&& a)
		{
			// Self-assignment detection
			if (&a == this)
				return *this;

			// Release any resource we're holding
			delete m_ptr;

			// Transfer ownership of a.m_ptr to m_ptr
			m_ptr = a.m_ptr;
			a.m_ptr = nullptr;

			return *this;
		}

		T& operator*() const { return *m_ptr; }
		T* operator->() const { return m_ptr; }
		bool IsNull() const { return m_ptr == nullptr; }
	};

	static Auto_ptr3<Res> GenerateAutoPtr3()
	{
		Auto_ptr3<Res> res(new Res);
		return res; // this return value will invoke the copy constructor
	}

	static void Test03();

	template <class T>
	class DynamicArray
	{
	private:
		T* m_array;
		int m_length;

	public:
		DynamicArray(int length)
			: m_array(new T[length]), m_length(length)
		{
		}

		~DynamicArray()
		{
			delete[] m_array;
		}

		// Copy constructor
		DynamicArray(const DynamicArray& arr)
			: m_length(arr.m_length)
		{
			m_array = new T[m_length];
			for (int i = 0; i < m_length; ++i)
				m_array[i] = arr.m_array[i];
		}

		// Copy assignment
		DynamicArray& operator=(const DynamicArray& arr)
		{
			if (&arr == this)
				return *this;

			delete[] m_array;

			m_length = arr.m_length;
			m_array = new T[m_length];

			for (int i = 0; i < m_length; ++i)
				m_array[i] = arr.m_array[i];

			return *this;
		}

		int getLength() const { return m_length; }
		T& operator[](int index) { return m_array[index]; }
		const T& operator[](int index) const { return m_array[index]; }
	};


	// Return a copy of arr with all of the values doubled
	static DynamicArray<int> CloneArrayAndDouble(const DynamicArray<int>& arr)
	{
		DynamicArray<int> dbl(arr.getLength());
		for (int i = 0; i < arr.getLength(); ++i)
			dbl[i] = arr[i] * 2;

		return dbl;
	}


	static void Test04();

	template <class T>
	class DynamicArray_Move
	{
	private:
		T* m_array;
		int m_length;

	public:
		DynamicArray_Move(int length)
			: m_array(new T[length]), m_length(length)
		{
		}

		~DynamicArray_Move()
		{
			delete[] m_array;
		}

		// Copy constructor
		DynamicArray_Move(const DynamicArray_Move& arr) = delete;

		// Copy assignment
		DynamicArray_Move& operator=(const DynamicArray_Move& arr) = delete;

		// Move constructor
		DynamicArray_Move(DynamicArray_Move&& arr)
			: m_length(arr.m_length), m_array(arr.m_array)
		{
			arr.m_length = 0;
			arr.m_array = nullptr;
		}

		// Move assignment
		DynamicArray_Move& operator=(DynamicArray_Move&& arr)
		{
			if (&arr == this)
				return *this;

			delete[] m_array;

			m_length = arr.m_length;
			m_array = arr.m_array;
			arr.m_length = 0;
			arr.m_array = nullptr;

			return *this;
		}

		int getLength() const { return m_length; }
		T& operator[](int index) { return m_array[index]; }
		const T& operator[](int index) const { return m_array[index]; }
	};


	static DynamicArray_Move<int> CloneArrayAndDouble_Move(const DynamicArray_Move<int>& arr)
	{
		DynamicArray_Move<int> dbl(arr.getLength());
		for (int i = 0; i < arr.getLength(); ++i)
			dbl[i] = arr[i] * 2;

		return dbl;
	}

	static void Test05();
};
