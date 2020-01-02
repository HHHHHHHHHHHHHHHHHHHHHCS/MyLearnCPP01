#include "_10_03_ConstructorsInitializationClasses.h"
void _10_03_ConstructorsInitializationClasses::Test()
{
	Test01();
	Test02();
}

void _10_03_ConstructorsInitializationClasses::Test01()
{
	BaseballPlayer bp{"AAA", 233, 33, 4};
	std::cout << bp.GetName() << '\n';
	std::cout << bp.GetHomeRuns() << '\n';
	std::cout << bp.GetAge() << '\n';
	std::cout << bp.GetBattingAverage() << '\n';
}


void _10_03_ConstructorsInitializationClasses::Test02()
{
	C c{5, 4.3, 'R'};
}
