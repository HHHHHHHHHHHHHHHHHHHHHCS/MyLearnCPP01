#include "_04_S_04_Auto.h"
#include "_04_S_02_Enum.h"

void _04_S_04_Auto::Test()
{
	add(1, 2);
}

auto _04_S_04_Auto::add(int x, int y) -> int
{
	auto i = 3;
	auto f = 1.0f;
	auto d = 2.0;
	auto z = i + f + d;
	x = y = 0;
	std::cout << typeid(z).name() << " " << sizeof(z) << std::endl;
	std::cout << typeid(z).name() << " " << sizeof(z) << std::endl;
	return 1;
}

auto _04_S_04_Auto::divide(double x, double y) -> double
{
	return x + y;
}


auto _04_S_04_Auto::printSomething() -> void
{
}


auto _04_S_04_Auto::generateSubstring(const std::string& s, int start, int len) -> std::string
{
	std::cout << s<<start<<len<<std::endl;
	return s;
}
