#include "_16_05_StdStringAssignmentAndSwapping.h"
#include <ostream>
#include <iostream>
#include <string>

void _16_05_StdStringAssignmentAndSwapping::Test()
{
	Test01();
	Test02();
}

void _16_05_StdStringAssignmentAndSwapping::Test01()
{
	/*
	 *string& string::operator= (const string& str)
	 *string& string::assign (const string& str)
	 *string& string::operator= (const char* str)
	 *string& string::assign (const char* str)
	 *string& string::operator= (char c)
	 *string& string::assign (const string& str, size_type index, size_type len)
	 *string& string::assign (const char* chars, size_type len)
	 *string& string::assign (size_type len, char c)
	 */

	std::string sString;

	// Assign a string value
	sString = std::string("One");
	std::cout << sString << std::endl;

	const std::string sTwo("Two");
	sString.assign(sTwo);
	std::cout << sString << std::endl;

	// Assign a C-style string
	sString = "Three";
	std::cout << sString << std::endl;

	sString.assign("Four");
	std::cout << sString << std::endl;

	// Assign a char
	sString = '5';
	std::cout << sString << std::endl;

	// Chain assignment
	std::string sOther;
	sString = sOther = "Six";
	std::cout << sString << " " << sOther << std::endl;


	const std::string sSource("abcdefg");
	std::string sDest;

	sDest.assign(sSource, 2, 4); // assign a substring of source from index 2 of length 4
	std::cout << sDest << std::endl;

	std::string sDest1;

	sDest1.assign(4, 'g');
	std::cout << sDest1 << std::endl;
}

void _16_05_StdStringAssignmentAndSwapping::Test02()
{
	/*
	 *void string::swap (string &str)
	 *void swap (string &str1, string &str2)
	 */
	std::string sStr1("red");
	std::string sStr2("blue");

	std::cout << sStr1 << " " << sStr2 << std::endl;
	swap(sStr1, sStr2);
	std::cout << sStr1 << " " << sStr2 << std::endl;
	sStr1.swap(sStr2);
	std::cout << sStr1 << " " << sStr2 << std::endl;
}

