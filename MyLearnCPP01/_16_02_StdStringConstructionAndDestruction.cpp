#include "_16_02_StdStringConstructionAndDestruction.h"
#include <string>
#include <iostream>

void _16_02_StdStringConstructionAndDestruction::Test()
{
	Test01();
	Test02();
	Test03();
}

void _16_02_StdStringConstructionAndDestruction::Test01()
{
	std::string sSrc0{"my string"};
	std::string sOut0{sSrc0};
	std::cout << sOut0 << '\n';

	std::cout << "===============\n";


	std::string sSrc1{"my string"};
	std::string sOut1{sSrc1, 3};
	std::string sOut2{sSrc1, 3, 4};
	std::cout << sOut1 << " " << sOut2 << '\n';

	std::cout << "===============\n";

	const char* szSrc{"my string"};
	std::string sOut3{szSrc};
	std::string sOut4{szSrc, 4};
	std::cout << sOut3 << " " << sOut4 << '\n';

	std::cout << "===============\n";

	std::string sOut5(4, 'Q');
	std::cout << sOut5 << '\n';

	std::cout << "===============\n";


}

void _16_02_StdStringConstructionAndDestruction::Test02()
{
	//这样子 效果是错误的
	//std::string sFour{ 4 };

	std::string sFour{ToString(4)};
	std::string sSixPointSeven{ToString(6.7)};
	std::string sA{ToString('A')};
	std::cout << sFour << '\n';
	std::cout << sSixPointSeven << '\n';
	std::cout << sA << '\n';
}

void _16_02_StdStringConstructionAndDestruction::Test03()
{
	double dX;
	if (FromString("3.4", dX))
		std::cout << dX << '\n';
	if (FromString("ABC", dX))
		std::cout << dX << '\n';
}
