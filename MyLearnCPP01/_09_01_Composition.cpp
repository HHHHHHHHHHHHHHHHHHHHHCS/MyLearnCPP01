#include "_09_01_Composition.h"
#include <iostream>
#include <string>

void _09_01_Composition::Test()
{
	std::cout << "Enter a name for your creature:";
	std::string name;
	std::cin >> name;

	Creature creature(name, Point2D(4, 7));

	while (1)
	{
		std::cout << creature << '\n';

		std::cout << "Enter X location (-1 quit):";

		int x = 0;

		std::cin >> x;

		if (x == -1)
			break;

		std::cout << "Enter Y location (-1 quit):";

		int y = 0;

		std::cin >> y;

		if (y == -1)
			break;

		creature.MoveTo(x, y);
	}
}
