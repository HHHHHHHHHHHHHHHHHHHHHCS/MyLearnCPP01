#include "_04_04_SignedIntegers.h"


void _04_04_SignedIntegers::Test()
{
	short s = 32767;
	std::cout << s << std::endl;

	signed short ss = 32767;
	std::cout << ss << std::endl;

	ss = ss + 32767;
	std::cout << ss << std::endl;

	std::cout << 20 / 4 << std::endl;

	std::cout << 8 / 5 << std::endl;

	std::cout << 8 / 5. << std::endl;
}
