#include "_04_S_01_ScopeAndType.h"

extern const unsigned char g_enemyDefence = 0x1E;

void _04_S_01_ScopeAndType::Test()
{
	std::cout << g_enemyDefence<<std::endl;
	//TypeID();
	//Explicit();
	//Cast();
	//String();
	CinGetline();
}

void _04_S_01_ScopeAndType::TypeID()
{
	short a(4);
	short b(5);
	std::cout << typeid(a + b).name() << " " << a + b << std::endl; // show us the type of a + b

	double d(4.0);
	short s(2);
	std::cout << typeid(d + s).name() << " " << d + s << std::endl; // show us the type of d + s


	std::cout << typeid(5u - 10).name() << " " << 5u - 10 << std::endl; // show us the type of d + s

	auto str = "ssss";
	char const* ss = "sssss";
	std::cout << typeid(str).name() << " " << str << std::endl;
	std::cout << typeid(ss).name() << " " << ss << std::endl;
}

void _04_S_01_ScopeAndType::Explicit()
{
	{
		//int i1 = 10;
		//int i2 = 4;
		//float f = i1 / i2;//warning int->float lost data
		//std::cout << f<<'\n';
	}

	{
		int i1 = 10;
		int i2 = 4;
		float f = (float)i1 / i2;
		std::cout << f << '\n';
	}

	{
		int i1 = 10;
		int i2 = 4;
		float f = float(i1) / i2;
		std::cout << f << '\n';
	}
}

void _04_S_01_ScopeAndType::Cast()
{
	char c = 'a';
	std::cout << static_cast<int>(c) << std::endl; // prints 97, not 'a'

	int i1 = 10;
	int i2 = 4;
	float f = static_cast<float>(i1) / i2;
	std::cout << static_cast<float>(f) << std::endl; // prints 97, not 'a'

	int i = 48;
	//char ch = i; // warning maybe lost data


	i = 48;
	char ch = static_cast<char>(i); // explicit conversion from int to char, so that a char is assigned to variable ch

	i = 100;
	//i = i / 2.5;// warning maybe lost data

	i = 100;
	i = static_cast<int>(i / 2.5);

	std::cout << ch << ' ' << i << std::endl;
}

void _04_S_01_ScopeAndType::String()
{
	std::string myName("Alex"); // initialize myName with string literal "Alex"
	myName = "John"; // assign variable myName the string literal "John


	std::string myID("45"); // "45" is not the same as integer 45!

	std::cout << "My name is: " << myName << " ID:" << myID << '\n';

	std::string a("45");
	std::string b("11");

	std::cout << a + b << "\n"; // a and b will be appended, not added
	a += " volts";
	std::cout << a;

	myName = "Alex";
	std::cout << myName << " has " << myName.length() << " characters\n";
}


void _04_S_01_ScopeAndType::CinGetline()
{
	{
		std::cout << "Enter your full name: ";
		std::string name;
		std::getline(std::cin, name); // read a full line of text into name

		std::cout << "Enter your age: ";
		std::string age;
		std::getline(std::cin, age); // read a full line of text into age

		std::cout << "Your name is " << name << " and your age is " << age << '\n';
	}

	{
		std::cout << "Pick 1 or 2: ";
		int choice{0};
		std::cin >> choice;

		std::cout << "Now enter your name: ";
		std::string name;
		std::getline(std::cin, name);

		std::cout << "Hello, " << name << ", you picked " << choice << '\n';
	}

	{
		std::cout << "Pick 1 or 2: ";
		int choice{0};
		std::cin >> choice;

		std::cin.ignore(32767, '\n'); // 累积计数达到32767 之后终止
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //最大可以忽略的数

		std::cout << "Now enter your name: ";
		std::string name;
		std::getline(std::cin, name);

		std::cout << "Hello, " << name << ", you picked " << choice << '\n';
	}
}
