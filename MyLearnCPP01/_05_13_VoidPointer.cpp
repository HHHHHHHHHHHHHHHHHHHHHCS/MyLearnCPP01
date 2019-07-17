#include "_05_13_VoidPointer.h"

void _05_13_VoidPointer::Test()
{
	int nValue;
	float fValue;

	struct Something
	{
		int n;
		float f;
	};

	Something sValue;

	void* ptr;
	ptr = &nValue;
	ptr = &fValue;
	ptr = &sValue;

	int value = 5;

	ptr = &value;

	int* intPtr = static_cast<int*>(ptr);

	std::cout << *intPtr << std::endl;
}
