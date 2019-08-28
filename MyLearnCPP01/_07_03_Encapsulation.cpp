#include "_07_03_Encapsulation.h"
#include <xutility>
#include <iostream>

_07_03_Encapsulation::Cls::Cls()
{
	for (int i = 0; i < std::size(arr); i++)
	{
		arr[i] = i;
	}
}

int _07_03_Encapsulation::Cls::GetValue(int index)
{
	return arr[index];
}


void _07_03_Encapsulation::Cls::SetValue(int index, int val)
{
	if(index<0||index>10)
	{
		return;
	}
	arr[index] = val;
}


void _07_03_Encapsulation::Test()
{
	Test01();
}

void _07_03_Encapsulation::Test01()
{
	Cls cls{};
	//cls.arr[3]=4;//error
	std::cout << cls.GetValue(4)<<std::endl;
	cls.SetValue(4, 100);
	std::cout << cls.GetValue(4) << std::endl;
}
