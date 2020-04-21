#include "_15_02_STLIteratorsOverview.h"
#include <vector>
#include <iostream>
#include <list>
#include <set>
#include <map>
#include <string>

void _15_02_STLIteratorsOverview::Test()
{
	Test01();
	Test02();
	Test03();
	Test04();
}

void _15_02_STLIteratorsOverview::Test01()
{
	std::vector<int> vect;

	for (int count = 0; count < 6; ++count)
		vect.push_back(count);

	std::vector<int>::const_iterator it;
	it = vect.cbegin();
	while (it != vect.cend())
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << '\n';
}

void _15_02_STLIteratorsOverview::Test02()
{
	std::list<int> li;
	for (int count = 0; count < 6; ++count)
		li.push_back(count);

	std::list<int>::const_iterator it;
	it = li.cbegin();
	while (it != li.cend())
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << '\n';
}

void _15_02_STLIteratorsOverview::Test03()
{
	std::set<int> myset;
	myset.insert(7);
	myset.insert(2);
	myset.insert(-6);
	myset.insert(8);
	myset.insert(1);
	myset.insert(-4);

	std::set<int>::const_iterator it;
	it = myset.cbegin();
	while (it != myset.cend())
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << '\n';
}

void _15_02_STLIteratorsOverview::Test04()
{
	std::map<int, std::string> mymap;
	mymap.insert(std::make_pair(4, "apple"));
	mymap.insert(std::make_pair(2, "orange"));
	mymap.insert(std::make_pair(1, "banana"));
	mymap.insert(std::make_pair(3, "grapes"));
	mymap.insert(std::make_pair(6, "mango"));
	mymap.insert(std::make_pair(5, "peach"));

	auto it{mymap.cbegin()};
	while (it != mymap.cend())
	{
		std::cout << it->first << "=" << it->second << " ";
		++it;
	}
	std::cout << '\n';
}
