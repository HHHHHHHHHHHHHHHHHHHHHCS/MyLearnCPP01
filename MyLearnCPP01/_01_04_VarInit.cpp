#include "_01_04_VarInit.h"

void _01_04_VarInit::Test()
{
	PrintVar();
}

void _01_04_VarInit::PrintVar()
{

	int x = 1;
	int y = 2, z = 3;

	std::cout << x << ' ' << y << ' ' << z << std::endl;


	int width;
	width = 5;
	std::cout << width << std::endl;
	width = 7;
	std::cout << width << std::endl;

	int length = 6;

	int speed(10), hp(100);

	std::cout << length << ' ' << speed << ' ' << hp << std::endl;

	int cubes{ 5 };

	int spheres{}, capsules{ 10 };//{}里面没有写为0

	std::cout << cubes << ' ' << spheres << ' ' << capsules << std::endl;


}
