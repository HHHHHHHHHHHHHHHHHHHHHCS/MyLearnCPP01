#include "_16_01_StdStringAndStdWstring.h"
#include <cstring>

void _16_01_StdStringAndStdWstring::Test()
{
	Test01();
}

void _16_01_StdStringAndStdWstring::Test01()
{
	//string有诸多不便
	char *strHello = new char[7];
	strcpy_s(strHello,7, "hello");
	//还要记得删除
	delete[] strHello;
}

void _16_01_StdStringAndStdWstring::Test02()
{
	//可以用下面这个来代替
	/*
	template<class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
	class basic_string;

	namespace std
	{
		typedef basic_string<char> string;
		typedef basic_string<wchar_t> wstring;
	}
	*/

	/*
		Function 	Effect
		
		Creation and destruction
		(constructor)		Create or copy a string
		(destructor)		Destroy a string
		
		Size and capacity
		capacity()			Returns the number of characters that can be held without reallocation
		empty()				Returns a boolean indicating whether the string is empty
		length(), size()	Returns the number of characters in string
		max_size()			Returns the maximum string size that can be allocated
		reserve()			Expand or shrink the capacity of the string	
		Element access
		[], at()			Accesses the character at a particular index
		
		Modification
		=,assign()			Assigns a new value to the string
		+=,append(), push_back()	Concatenates characters to end of the string
		insert()			Inserts characters at an arbitrary index in string
		clear()				Delete all characters in the string
		erase()				Erase characters at an arbitrary index in string
		replace()			Replace characters at an arbitrary index with other characters
		resize()			Expand or shrink the string(truncates or adds characters at end of string)
		swap() 				Swaps the value of two strings
		
		Input and Output
		>> , getline()		Reads values from the input stream into the string
		<<					Writes string value to the output stream
		c_str()				Returns the contents of the string as a NULL - terminated C - style string
		copy()				Copies contents(not NULL - terminated) to a character array
		data() 				Returns the contents of the string as a non - NULL - terminated character array
		
		String comparison
		== , !=				Compares whether two strings are equal / unequal(returns bool)
		<, <= , > >=		Compares whether two strings are less than / greater than each other(returns bool)
		compare() 			Compares whether two strings are equal / unequal(returns - 1, 0, or 1)
	
		Substrings and concatenation
		+					Concatenates two strings
		substr() 			Returns a substring
		
		Searching
		find()				Find index of first character / substring
		find_first_of()		Find index of first character from a set of characters
		find_first_not_of()	Find index of first character not from a set of characters
		find_last_of()		Find index of last character from a set of characters
		find_last_not_of()	Find index of last character not from a set of characters
		rfind() 			Find index of last character / substring

		Iterator and allocator support
		begin(), end()		Forward - direction iterator support for beginning / end of string
		get_allocator()		Returns the allocator
		rbegin(), rend() 	Reverse - direction iterator support for beginning / end of string
	*/
}

