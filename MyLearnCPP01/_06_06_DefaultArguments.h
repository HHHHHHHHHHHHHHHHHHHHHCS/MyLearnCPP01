#pragma once

class _06_06_DefaultArguments
{
public:
	static void Test();
	static void Test01();
	static void Test01_Print(int x, int y = 3);//默认参数正常是写在头文件里面 为了 方便第一时间查看
	//static void Test01_Print(int x = 5, int y );//默认参数要在后面
	//static void Test01_Print(int x);//因为有默认参数存在 这样会引起二意性
};
