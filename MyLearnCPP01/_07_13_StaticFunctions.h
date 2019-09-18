#pragma once
#include <vector>

class _07_13_StaticFunctions
{
public:
	class TestClass
	{
	private:
		static std::vector<char> s_backChars;

	public:
		class _init
		{
		public:
			_init()
			{
				s_backChars.push_back('a');
				s_backChars.push_back('e');
				s_backChars.push_back('i');
				s_backChars.push_back('o');
				s_backChars.push_back('u');

			}
		};

		static int GetValue() { return s_value; }
		static int GetNextID() { return ID++; }
		static std::vector<char> s_myChars;

	private:
		static int s_value;
		static int ID;
		static _init s_init;
	};

	static void Test();
	static void Test01();
};
