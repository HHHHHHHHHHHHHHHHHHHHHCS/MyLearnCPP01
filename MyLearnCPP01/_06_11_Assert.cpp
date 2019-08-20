#include "_06_11_Assert.h"
#include <array>
#include <cassert>

void _06_11_Assert::Test()
{
	Test01();
}

void _06_11_Assert::Test01()
{
	auto arr = new std::array<int, 10>();
	GetArrayValue(*arr, 11);
}

int _06_11_Assert::GetArrayValue(const std::array<int, 10>& arr, int index)
{
	assert(index >= 0 && index <= arr.size());

	return arr[index];
}
