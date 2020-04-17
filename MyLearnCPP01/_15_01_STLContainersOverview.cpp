#include "_15_01_STLContainersOverview.h"
#include <vector>
#include <iostream>
#include <deque>

//无序容器
//set multiset map multimap 
//有序容器
//stack queue priorityQueue

void _15_01_STLContainersOverview::Test()
{
	Test01();
	Test02();
}


void _15_01_STLContainersOverview::Test01()
{
	std::vector<int> vect;
	for (int count = 0; count < 6; ++count)
	{
		vect.push_back(10 - count);
	}

	for (int index = 0; index < vect.size(); ++index)
	{
		std::cout << vect[index] << ' ';
	}

	std::cout << '\n';
}

void _15_01_STLContainersOverview::Test02()
{
	std::deque<int> deq;
	for(int count =0;count<3;++count)
	{
		deq.push_back(count);
		deq.push_front(10 - count);
	}

	for (int& item : deq)
	{
		std::cout << item++ << ' ';
	}

	std::cout << '\n';

	for (int& item : deq)
	{
		std::cout << item << ' ';
	}

	std::cout << '\n';
}
