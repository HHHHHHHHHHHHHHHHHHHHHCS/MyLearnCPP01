#pragma once
#include <iostream>

class _14_01_IntroToSmartPointersAndMoveSemantics
{
public:


	class Resource
	{
	public:
		Resource() { std::cout << "Resource acquired\n"; }
		~Resource() { std::cout << "Resource destroyed\n"; }
		void SayHi() { std::cout << "Hi\n"; }
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
			delete m_ptr;//delete nullptr 无所谓
		}

		T& operator*() const { return *m_ptr; }
		T* operator->() const { return m_ptr; }
	};

	static void Test01();
	static void Test02();

	template <class T>
	class Auto_ptr2
	{
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

		// A copy constructor that implements move semantics
		Auto_ptr2(Auto_ptr2& a) // note: not const
		{
			m_ptr = a.m_ptr; // transfer our dumb pointer from the source to our local object
			a.m_ptr = nullptr; // make sure the source no longer owns the pointer
		}

		// An assignment operator that implements move semantics
		Auto_ptr2& operator=(Auto_ptr2& a) // note: not const
		{
			if (&a == this)
				return *this;

			delete m_ptr; // make sure we deallocate any pointer the destination is already holding first
			m_ptr = a.m_ptr; // then transfer our dumb pointer from the source to the local object
			a.m_ptr = nullptr; // make sure the source no longer owns the pointer
			return *this;
		}

		T& operator*() const { return *m_ptr; }
		T* operator->() const { return m_ptr; }
		bool isNull() const { return m_ptr == nullptr; }
	};

	static void Test03();
};
