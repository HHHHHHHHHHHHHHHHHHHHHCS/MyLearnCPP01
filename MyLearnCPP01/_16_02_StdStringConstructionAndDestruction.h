#pragma once
#include <string>
#include <sstream>

class _16_02_StdStringConstructionAndDestruction
{
public:
	template <typename T>
	inline static std::string ToString(T tX)
	{
		std::ostringstream oStream;//#include <sstream>
		oStream << tX;
		return oStream.str();
	}

	template <typename T>
	inline static bool FromString(const std::string& sString, T &tX)
	{
		std::istringstream iStream(sString);//#include <sstream>
		return !(iStream >> tX).fail(); // extract value into tX, return success or not
	}

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();

};
