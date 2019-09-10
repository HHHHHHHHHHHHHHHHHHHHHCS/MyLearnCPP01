#pragma once

class _07_10_HiddenThisPointer
{
public:
	class Simple
	{
	private:
		int m_id;
	public:
		Simple(int id)
		{
			SetID(id);
		}

		void SetID(int id) { m_id = id; }
		// SetID converted by the compiler
		//void SetID(Simple* const this, int id) { this->m_id = id; }
		int GetID() { return m_id; }
	};

	class Something
	{
	private:
		int data;
	public:
		Something(int data)
		{
			this->data = data; //this指当前的类
		}
	};

	class Calc
	{
	private:
		int m_value;
	public:
		Calc() { m_value = 0; }

		Calc& Add(int value)
		{
			m_value += value;
			return *this;
		}

		Calc& Sub(int value)
		{
			m_value -= value;
			return *this;
		}

		Calc& Mul(int value)
		{
			m_value *= value;
			return *this;
		}

		int GetValue() { return m_value; }
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
};

