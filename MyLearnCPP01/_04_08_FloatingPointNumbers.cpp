#include "_04_08_FloatingPointNumbers.h"
#include <iostream>
#include <iomanip>

void _04_08_FloatingPointNumbers::Test()
{
	//要在后面加.0 让编译器知道是浮点数
	//f ->float 否则默认为double
	//float fValue{5.0f};
	//double dValue{4.0};
	//long double ldValue{3.0};

	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';

	std::cout << 9.87654321f << '\n';
	std::cout << 987.654321f << '\n';
	std::cout << 987654.321f << '\n';
	std::cout << 9876543.21f << '\n';
	std::cout << 0.0000987654321f << '\n';


	std::cout << std::setprecision(16); //能展示十六位
	std::cout << 3.33333333333333333333333333333333333333f << '\n';//float精度丢失
	std::cout << 3.33333333333333333333333333333333333333 << '\n';

	float f{ 123456789.0f }; //float精度丢失
	std::cout << std::setprecision(9); 
	std::cout << f << '\n';

	double d{ 0.1 };
	std::cout << d << '\n'; 
	std::cout << std::setprecision(17);
	std::cout << d << '\n';//因为二进制储存的所以会导致小数不准确

	std::cout << std::setprecision(17);

	double d1(1.0);
	std::cout << d1 << std::endl;

	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); 
	std::cout << d2 << std::endl;//与上面同理  小数是二进制储存的  所以精度有问题

}
