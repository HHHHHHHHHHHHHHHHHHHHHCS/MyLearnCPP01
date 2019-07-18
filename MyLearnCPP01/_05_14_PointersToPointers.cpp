#include "_05_14_PointersToPointers.h"
#include <iostream>

void _05_14_PointersToPointers::Test()
{
	Test01();
	Test02();
	Test03();
}

void _05_14_PointersToPointers::Test01()
{
	int value = 5;

	int* ptr = &value;
	std::cout << *ptr << std::endl;;

	int** ptrptr = &ptr;
	std::cout << **ptrptr << std::endl;;

	//**ptrptr = &&value;//error:

	//**ptrptr = nullptr; //error

	**ptrptr = 0; //约等于变成空指针
}

void _05_14_PointersToPointers::Test02()
{
	int** arr0 = new int*[10];
	std::cout << *arr0<<'\n';
	//int **arr1 = new int[10][5];//error:

	int (*arr1)[5] = new int[10][5]; //用指针的方式申明多维数组
	auto arr2 = new int[10][5]; //跟上面一样

	std::cout << **arr1 + 25 << ' ' << arr2[3][4] << '\n';

	int** arrPtr = new int*[10];
	for (int i = 0; i < 10; i++)
	{
		arrPtr[i] = new int[5];
	}

	arrPtr[9][4] = 3;

	int** array = new int*[10]; //也可以是非长方形的数组
	for (int count = 0; count < 10; ++count)
		array[count] = new int[count + 1];

	//删除
	for (int count = 0; count < 10; ++count)
		delete[] array[count];
	delete[] array;
}

void _05_14_PointersToPointers::Test03()
{
	//因为有时候二维数组比较恶心
	int** array = new int*[10];
	for (int count = 0; count < 10; ++count)
		array[count] = new int[5];

	//所以用一维数组加方法代替
	int* array0 = new int[50];

#define  getSingleIndex( row, col, numberOfColumnsInArray) \
		   (row * numberOfColumnsInArray) + col


	array0[getSingleIndex(9, 4, 5)] = 3;

	std::cout << array0[getSingleIndex(9, 4, 5)] << std::endl;
}
