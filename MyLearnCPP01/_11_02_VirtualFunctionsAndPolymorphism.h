#pragma once
#include <iostream>
#include <string>
#include <string_view>

class _11_02_VirtualFunctionsAndPolymorphism
{
public:
	class Base
	{
	public:
		virtual std::string GetName() const { return "Base"; } // note addition of virtual keyword
	};

	class Derived : public Base
	{
	public:
		virtual std::string GetName() const { return "Derived"; }
	};

	//-----------------------

	class A
	{
	public:
		virtual std::string_view GetName() const { return "A"; }
	};

	class B : public A
	{
	public:
		virtual std::string_view GetName() const { return "B"; }
	};

	class C : public B
	{
	public:
		virtual std::string_view GetName() const { return "C"; }
	};

	class D : public C
	{
	public:
		virtual std::string_view GetName() const { return "D"; }
	};

	//--------------
	class Animal
	{
	protected:
		std::string m_name;

		// We're making this constructor protected because
		// we don't want people creating Animal objects directly,
		// but we still want derived classes to be able to use it.
		Animal(const std::string &name)
			: m_name{ name }
		{
		}

	public:
		const std::string &getName() const { return m_name; }
		virtual std::string_view speak() const { return "???"; }
	};

	class Cat : public Animal
	{
	public:
		Cat(const std::string &name)
			: Animal{ name }
		{
		}

		virtual std::string_view speak() const { return "Meow"; }
	};

	class Dog : public Animal
	{
	public:
		Dog(const std::string& name)
			: Animal{ name }
		{
		}

		virtual std::string_view speak() const { return "Woof"; }
	};

	static void report(const Animal &animal)
	{
		std::cout << animal.getName() << " says " << animal.speak() << '\n';
	}

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
