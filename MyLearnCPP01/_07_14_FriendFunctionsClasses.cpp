#include "_07_14_FriendFunctionsClasses.h"
#include <iostream>


void _07_14_FriendFunctionsClasses::Test()
{
	Test01();
	Test02();
	Test03();
}


//友元函数
void Reset(_07_14_FriendFunctionsClasses::Accumulator& accumulator)
{
	accumulator.m_value = 0;
}

int Get(_07_14_FriendFunctionsClasses::Accumulator& accumulator)
{
	return accumulator.m_value;
}


void _07_14_FriendFunctionsClasses::Test01()
{
	Accumulator acc;
	acc.Add(5);
	std::cout << Get(acc) << '\n';
	Reset(acc);
	std::cout << Get(acc) << '\n';
}

void PrintWeather(const _07_14_FriendFunctionsClasses::Temperature &temperature, const _07_14_FriendFunctionsClasses::Humidity &humidity)
{
	std::cout << "The temperature is " << temperature.m_temp <<
		" and the humidity is " << humidity.m_humidity << '\n';
}

void _07_14_FriendFunctionsClasses::Test02()
{
	Humidity hum(10);
	Temperature temp(12);

	PrintWeather(temp, hum);
}


// Now we can define Display::displayItem, which needs to have seen the full definition of class Storage
void _07_14_FriendFunctionsClasses::Display::displayItem(const Storage &storage) const
{
	if (m_displayIntFirst)
		std::cout << storage.m_nValue << " " << storage.m_dValue << '\n';
	else // display double first
		std::cout << storage.m_dValue << " " << storage.m_nValue << '\n';
}

 
void _07_14_FriendFunctionsClasses::Test03()
{
	Storage storage(5, 6.7);
	Display display(false);

	display.displayItem(storage);
}


