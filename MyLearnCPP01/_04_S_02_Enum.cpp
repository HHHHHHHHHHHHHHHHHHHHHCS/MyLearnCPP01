#include "_04_S_02_Enum.h"
#include <iostream>
typedef double db_t;
using flt_t = float;

enum Color
{
	COLOR_BLACK,
	// assigned 0
	COLOR_RED,
	// assigned 1
	COLOR_BLUE,
	// assigned 2
	COLOR_GREEN,
	// assigned 3
	COLOR_WHITE,
	// assigned 4
	COLOR_CYAN,
	// assigned 5
	COLOR_YELLOW,
	// assigned 6
	COLOR_MAGENTA // assigned 7
};

enum Animal
{
	ANIMAL_CAT = -3,
	ANIMAL_DOG,
	// assigned -2
	ANIMAL_PIG,
	// assigned -1
	ANIMAL_HORSE = 5,
	ANIMAL_GIRAFFE = 5,
	// shares same value as ANIMAL_HORSE
	ANIMAL_CHICKEN // assigned 6
};


void _04_S_02_Enum::Test()
{
	DoColor();
	DoAnimal();
	Input();
	ReadFileContents();
	LikeClass();
}

void _04_S_02_Enum::DoColor()
{
	Color paint = COLOR_WHITE;
	Color house(COLOR_BLUE);
	Color apple{COLOR_RED};

	std::cout << paint << ' ' << house << ' ' << apple << std::endl;
}

void _04_S_02_Enum::DoAnimal()
{
	int mypet = ANIMAL_PIG;

	std::cout << mypet << ' ' << ANIMAL_CAT << std::endl;
}

void _04_S_02_Enum::Input()
{
	int inputColor;
	std::cin >> inputColor;

	Color color = static_cast<Color>(inputColor);

	if (color == COLOR_BLACK)
		std::cout << "Black";
	else if (color == COLOR_RED)
		std::cout << "Red";
	else if (color == COLOR_BLUE)
		std::cout << "Blue";
	else if (color == COLOR_GREEN)
		std::cout << "Green";
	else if (color == COLOR_WHITE)
		std::cout << "White";
	else if (color == COLOR_CYAN)
		std::cout << "Cyan";
	else if (color == COLOR_YELLOW)
		std::cout << "Yellow";
	else if (color == COLOR_MAGENTA)
		std::cout << "Magenta";
	else
		std::cout << "Who knows!";
}


//也可以把enum加到头文件 跨文件使用
ParseResult _04_S_02_Enum::ReadFileContents()
{
	int x = rand() % 100;
	if (x < 33)
		return ERROR_OPENING_FILE;
	if (x < 66)
		return ERROR_READING_FILE;
	if (x < 80)
		return ERROR_PARSING_FILE;

	return SUCCESS;
}

void _04_S_02_Enum::LikeClass()
{
	enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
	{
		RED,
		// RED is inside the scope of Color
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		// BANANA is inside the scope of Fruit
		APPLE
	};

	Color color = Color::RED; // note: RED is not directly accessible any more, we have to use Color::RED
	Fruit fruit = Fruit::BANANA; // note: BANANA is not directly accessible any more, we have to use Fruit::BANANA

	if (static_cast<int>(color) == static_cast<int>(fruit))
		// compile error here, as the compiler doesn't know how to compare different types Color and Fruit
		std::cout << "color and fruit are equal\n";
	else
		std::cout << "color and fruit are not equal\n";


	if (color == Color::RED) // this is okay
		std::cout << "The color is red!\n";
	else if (color == Color::BLUE)
		std::cout << "The color is blue!\n";
}
