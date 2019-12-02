#include "_08_14_ShallowSeepCopying.h"
#include <iostream>

void _08_14_ShallowSeepCopying::Test()
{
	Test01();
}


void _08_14_ShallowSeepCopying::Test01()
{
	MyString ss = "asdas";

	std::cout << ss.m_data << '\n';

	MyString tt{ss};

	ss.m_data = const_cast<char*>("asdasdccc");

	std::cout << tt.m_data << '\n';

	auto zz = MyString::DeepCopy(ss);

	std::cout << zz.m_data << '\n';
}
