#include "_05_01_Random.h"
#include <iostream>
#include <ctime>


void _05_01_Random::Test()
{
	PrintRand();

	std::cout << GetRandomNumber(1,6);
}

void _05_01_Random::PrintRand()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr))); 

	for (int count = 1; count <= 100; ++count)
	{
		std::cout << std::rand() << "\t";

		if (count % 5 == 0)
			std::cout << "\n";
	}
}

int _05_01_Random::GetRandomNumber(int min, int max)
{
	//取模会让低结果更容易出现所以用乘法
	static const double fraction = 1.0 / (RAND_MAX + 1.0);  
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


