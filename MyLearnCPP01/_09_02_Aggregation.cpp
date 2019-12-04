#include "_09_02_Aggregation.h"
#include <iostream>

void _09_02_Aggregation::Test()
{
	Teacher* teacher = new Teacher{"asdas"};

	Department department{teacher};

	// std::cout << !department.teacher << '\n';
	// std::cout << !teacher << '\n';


	std::cout << (*department.teacher).GetName() << '\n';
	//跟上面的效果一样  -> 是 提取指针  *指针
	std::cout << department.teacher->GetName() << '\n';

	delete teacher;

	// std::cout << !department.teacher << '\n';
	// std::cout << !teacher << '\n';

}
