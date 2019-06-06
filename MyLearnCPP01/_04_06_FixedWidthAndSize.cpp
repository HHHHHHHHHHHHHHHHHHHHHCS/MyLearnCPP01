#include "_04_06_FixedWidthAndSize.h"
#include <valarray>

//固定宽度整数有两个缺点：首先，它们可能不支持那些无法表示这些类型的体系结构。在某些体系结构上，它们的性能也可能低于内置类型。
//应避免使用上述固定宽度整数，因为它们可能未在所有目标体系结构上定义。
//fast快速 least最小  比较安全
void _04_06_FixedWidthAndSize::Test()
{
	std::int16_t i(5); // direct initialization
	std::cout << i << std::endl;

	std::int_fast16_t j(6);
	std::cout << j << std::endl;

	std::int_least16_t k(1);
	std::cout << k << std::endl;

	std::int8_t myint = 65;//注意这个是char
	std::cout << myint<<std::endl;

	size_t size = sizeof(int);
	std::cout << size << ' ' << sizeof(size_t) << std:: endl;
}
