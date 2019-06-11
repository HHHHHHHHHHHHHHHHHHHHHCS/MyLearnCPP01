#include "_04_12_Literals.h"
#include <iostream>

void _04_12_Literals::Test()
{
	auto str{"qwer"};
	std::cout << sizeof(str) << ' ' << sizeof("qwe") << ' ' << sizeof("qw") << ' ' << sizeof("q") << '\n';
	std::cout << sizeof('q') << '\n';
	unsigned int value1{5u}; // 5 has type unsigned int
	long value2{6L}; // 6 has type long
	std::cout << value1 << ' ' << value2 << '\n';


	std::cout << "Hello, world!\n"; // "Hello, world!" is a C-style string literal
	std::cout << "Hello," " world!\n"; // C++ will concatenate sequential string literals

	int x{012}; // 0开头表示八进制
	std::cout << x << '\n';

	x = 0xF; // 0x 表示十六进制
	std::cout << x << '\n';

	x = 0b11110000; // ob开头是二进制
	std::cout << x << '\n';
}
