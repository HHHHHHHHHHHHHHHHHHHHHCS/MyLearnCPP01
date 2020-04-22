#include "_15_03_STLAlgorithmsOverview.h"
#include <list>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <vector>

void _15_03_STLAlgorithmsOverview::Test()
{
	Test01();
	Test02();
	Test03();
}

void _15_03_STLAlgorithmsOverview::Test01()
{
	std::list<int> li(6);
	//iota 让其自增长
	std::iota(li.begin(), li.end(), 0);

	std::cout << *std::min_element(li.begin(), li.end()) << ' '
		<< *std::max_element(li.begin(), li.end()) << '\n';

}

void _15_03_STLAlgorithmsOverview::Test02()
{
	std::list<int> li(6);
	std::iota(li.begin(), li.end(), 0);

	auto it{ std::find(li.begin(), li.end(), 3) };

	if (it != li.end())
	{
		li.insert(it, 8);
	}


	for (int i : li)
		std::cout << i << ' ';

	std::cout << '\n';
}

void _15_03_STLAlgorithmsOverview::Test03()
{
	std::vector<int> vect{ 7,-3,6,2,-5,0,4 };

	std::sort(vect.begin(), vect.end());

	for(int i:vect)
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	std::reverse(vect.begin(), vect.end());

	for (int i : vect)
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	std::sort(vect.begin(), vect.end());

	for (int i : vect)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
}
