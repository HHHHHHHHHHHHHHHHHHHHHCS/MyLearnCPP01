#pragma once
#include <ostream>

class _11_11_PrintingUsingOperator
{
public:
	class Base
	{
	public:
		Base()
		{
		}

		friend  std::ostream& operator <<(std::ostream &out,const Base &b)
		{
			return b.Print(out);
		}

		virtual  std::ostream& Print(std::ostream& out) const
		{
			out << "Base";
			return out;
		}
	};

	class  Derived:public Base
	{
	public:
		Derived(){}

		virtual std::ostream& Print(std::ostream& out) const override
		{
			out << "Derived";
			return out;
		}
	};

	static void Test();
	static void Test01();
};
