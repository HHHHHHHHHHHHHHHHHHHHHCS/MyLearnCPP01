#include "_04_11_Char.h"

void _04_11_Char::Test()
{
	char ch1{ 98 }, ch2{ '5' };
	std::cout << ch1<<' '<<ch2<<std::endl;

	int i{ ch1 };
	std::cout << i<< std::endl;

	std::cout << static_cast<int>(ch1)<<std::endl;

	std::cout << "First line\nSecond line\n";


	std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

	char ch{};
	std::cin >> ch; // ch = 'a', "bcd" is left queued.
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

	// Note: The following cin doesn't ask the user for input, it grabs queued input!
	std::cin >> ch; // ch = 'b', "cd" is left queued.
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';
}
