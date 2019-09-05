#include "_04_Old_01_Operators.h"
#include <iostream>
#include <bitset>

void _04_Old_01_Operators::Test()
{
	//IncrementDecrement();
	//SizeofCommaConditional();
	//RelationalOperators();
	//LogicalOperators();
	//BitwiseOperators();
	BitFlagsBitMasks();
}


void _04_Old_01_Operators::IncrementDecrement()
{
	std::cout << -5 / 3 << ' ' << -5 % 3 << std::endl;

	int x = 5;
	int y = ++x;
	std::cout << x << ' ' << y << std::endl;

	x = 5;
	y = x++;

	std::cout << x << ' ' << y << std::endl;

	x = 5, y = 5;
	std::cout << x << " " << y << '\n';
	std::cout << ++x << " " << --y << '\n'; // prefix
	std::cout << x << " " << y << '\n';
	std::cout << x++ << " " << y-- << '\n'; // postfix
	std::cout << x << " " << y << '\n';


	x = 5;
	int value = Add(x, ++x);
	// is this 5 + 6, or 6 + 6?  It depends on what order your compiler evaluates the function arguments in

	std::cout << value << std::endl; // value could be 11 or 12, depending on how the above line evaluates!

	x = 5;

	value = Add(x, x++);
	// is this 5 + 6, or 6 + 6?  It depends on what order your compiler evaluates the function arguments in

	std::cout << value << std::endl; // value could be 11 or 12, depending on how the above line evaluates!
}

void _04_Old_01_Operators::SizeofCommaConditional()
{
	double d = 5.0;
	std::cout << sizeof(d) << std::endl; // will Print the size of variable d in bytes

	int x = 0;
	int y = 2;
	int z = (++x, ++y); // increment x and y
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;

	z = (x, y);
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	z = x, y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	z = x > y ? x : y;
	std::cout << x << ' ' << y << ' ' << z << std::endl;

	x = 0, y = 2;
	std::cout << ((x > y) ? x : y) << std::endl;
	//因为 << 运算符的优先级高于？：运算符
	std::cout << (x > y) ? x : y;
	//就会变成这样
	(std::cout << (x > y)) ? x : y;
}

void _04_Old_01_Operators::RelationalOperators()
{
	double d1(100 - 99.99); // should equal 0.01
	double d2(10 - 9.99); // should equal 0.01

	if (d1 == d2)
		std::cout << "d1 == d2" << "\n";
	else if (d1 > d2)
		std::cout << "d1 > d2" << "\n";
	else if (d1 < d2)
		std::cout << "d1 < d2" << "\n";

	std::cout << ApproximatelyEqualAbsRel(d1, d2, 1e-8, 1e-4) << '\n';

	double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	std::cout << ApproximatelyEqualAbsRel(d1, d2) << "\n";


	std::cout << ApproximatelyEqualAbsRel(a - 1.0, 0.0, 1e-12, 1e-8) << "\n"; // compare "almost 0.0" to 0.0
}

bool _04_Old_01_Operators::ApproximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	// Check if the numbers are really close -- needed when comparing numbers near zero.
	double diff = fabs(a - b);
	if (diff <= absEpsilon)
		return true;

	// Otherwise fall back to Knuth's algorithm
	return diff <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int _04_Old_01_Operators::Add(int x, int y)
{
	return x + y;
}


void _04_Old_01_Operators::LogicalOperators()
{
	int x = 5;
	int y = 7;

	if (!x == y)
		std::cout << "x does not equal y";
	else
		std::cout << "x equals y";

	std::cout << '\n';

	if (!(x == y))
		std::cout << "x does not equal y";
	else
		std::cout << "x equals y";

	std::cout << '\n';

	std::cout << "Enter a number: ";
	int value;
	std::cin >> value;

	if (value == 0 || value == 1)
		std::cout << "You picked 0 or 1" << std::endl;
	else
		std::cout << "You did not pick 0 or 1" << std::endl;

	std::cout << '\n';
}

void _04_Old_01_Operators::BitwiseOperators()
{
	//3 = 0011
	//3 << 1 = 0110 = 6
	//3 << 2 = 1100 = 12
	//3 << 3 = 1000 = 8
	//12 = 1100
	//12 >> 1 = 0110 = 6
	//12 >> 2 = 0011 = 3
	//12 >> 3 = 0001 = 1
	std::cout << sizeof(2048) << ' ' << sizeof(true) << std::endl;

	int x = 4;
	std::cout << x << std::endl;
	x = x << 1;
	std::cout << x << std::endl;
}

void _04_Old_01_Operators::BitFlagsBitMasks()
{
	//C++ 14
	const unsigned char option0 = 0b0000'0001; // represents bit 0
	const unsigned char option1 = 0b0000'0010; // represents bit 1
	const unsigned char option2 = 0b0000'0100; // represents bit 2 
	const unsigned char option3 = 0b0000'1000; // represents bit 3
	const unsigned char option4 = 0b0001'0000; // represents bit 4
	const unsigned char option5 = 0b0010'0000; // represents bit 5
	const unsigned char option6 = 0b0100'0000; // represents bit 6
	const unsigned char option7 = 0b1000'0000; // represents bit 7

	//C++ 11
	const unsigned char _option0 = 0x1; // hex for 0000 0001 
	const unsigned char _option1 = 0x2; // hex for 0000 0010
	const unsigned char _option2 = 0x4; // hex for 0000 0100
	const unsigned char _option3 = 0x8; // hex for 0000 1000
	const unsigned char _option4 = 0x10; // hex for 0001 0000
	const unsigned char _option5 = 0x20; // hex for 0010 0000
	const unsigned char _option6 = 0x40; // hex for 0100 0000
	const unsigned char _option7 = 0x80; // hex for 1000 0000

	//C++ 11 Other
	const unsigned char __option0 = 1 << 0; // 0000 0001 
	const unsigned char __option1 = 1 << 1; // 0000 0010
	const unsigned char __option2 = 1 << 2; // 0000 0100
	const unsigned char __option3 = 1 << 3; // 0000 1000
	const unsigned char __option4 = 1 << 4; // 0001 0000
	const unsigned char __option5 = 1 << 5; // 0010 0000
	const unsigned char __option6 = 1 << 6; // 0100 0000
	const unsigned char __option7 = 1 << 7; // 1000 0000

	unsigned char myflags = 0;
	myflags |= option4; // turn option 4 on
	myflags |= (option4 | option5); // turn options 4 and 5 on at the same time
	myflags &= ~option4; // turn option 4 off
	myflags &= ~(option4 | option5); // turn options 4 and 5 off at the same time
	myflags ^= option4; // flip option4 from on to off, or vice versa
	myflags ^= (option4 | option5); // flip options 4 and 5 at the same time


	if (myflags & option4)
		std::cout << "myflags has option 4 set";
	if (!(myflags & option5))
		std::cout << "myflags does not have option 5 set";

	std::bitset<8> bits(option1 | option2); // start with option 1 and 2 turned on
	std::bitset<8> morebits(0x3); // start with bit pattern 0000 0011
	//test()允许我们查询一个位是0还是1
	//set()允许我们开启一下（如果该位已经打开，这将无效）
	//reset()允许我们关闭一点（如果该位已经关闭，这将无效）
	//flip()允许我们从0翻转到1，反之亦然


	const int p0 = 0;
	const int p1 = 1;
	const int p2 = 2;
	const int p3 = 3;
	const int p4 = 4;
	const int p5 = 5;
	const int p6 = 6;
	const int p7 = 7;

	std::bitset<8> _bits(0x2); // we need 8 bits, start with bit pattern 0000 0010
	_bits.set(p4); // set bit 4 to 1 (now we have 0001 0010)
	_bits.flip(p5); // flip bit 5 (now we have 0011 0010)
	_bits.reset(p5); // set bit 5 back to 0 (now we have 0001 0010)

	std::cout << "Bit 4 has value: " << _bits.test(p4) << '\n';
	std::cout << "Bit 5 has value: " << _bits.test(p5) << '\n';
	std::cout << "All the bits: " << _bits << '\n';

	const unsigned int lowMask = 0xF; // bit mask to keep low 4 bits (hex for 0000 0000 0000 1111)

	std::cout << "Enter an integer: ";
	int num;
	std::cin >> num;

	num &= lowMask; // remove the high bits to leave only the low bits

	std::cout << "The 4 low bits have value: " << num << '\n';


	const unsigned int redBits = 0xFF000000;
	const unsigned int greenBits = 0x00FF0000;
	const unsigned int blueBits = 0x0000FF00;
	const unsigned int alphaBits = 0x000000FF;

	std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	unsigned int pixel;
	std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value

	// use bitwise AND to isolate red pixels, then right shift the value into the range 0-255
	unsigned int red = (pixel & redBits) >> 24;
	unsigned int green = (pixel & greenBits) >> 16;
	unsigned int blue = (pixel & blueBits) >> 8;
	unsigned int alpha = pixel & alphaBits;

	std::cout << "Your color contains:\n";
	std::cout << static_cast<int>(red) << " of 255 red\n";
	std::cout << static_cast<int>(green) << " of 255 green\n";
	std::cout << static_cast<int>(blue) << " of 255 blue\n";
	std::cout << static_cast<int>(alpha) << " of 255 alpha\n";

}
