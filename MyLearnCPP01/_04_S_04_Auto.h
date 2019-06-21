#pragma once
#include <string>
#include <iostream>

class _04_S_04_Auto
{
public:
	static void Test();
	static auto add(int x, int y) -> int;
	static auto divide(double x, double y) -> double;
	static auto printSomething() -> void;
	static auto generateSubstring(const std::string& s, int start, int len) -> std::string;
};
