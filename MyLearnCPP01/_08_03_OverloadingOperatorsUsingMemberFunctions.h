#pragma once

class _08_03_OverloadingOperatorsUsingMemberFunctions
{
public:
	class  Cents
	{
	private:
		int cents;
	public:
		Cents(int _cents) { cents = _cents; }

		Cents operator+(int value) const;

		int GetCents(){ return cents; }
	};

	static void Test();
	static void Test01();
	static void Test02();
};
