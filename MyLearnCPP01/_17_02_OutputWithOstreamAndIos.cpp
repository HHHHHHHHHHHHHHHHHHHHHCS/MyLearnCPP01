#include "_17_02_OutputWithOstreamAndIos.h"
#include <iostream>
#include <iomanip>

void _17_02_OutputWithOstreamAndIos::Test()
{
	Test01();
}

void _17_02_OutputWithOstreamAndIos::Test01()
{
	std::cout.setf(std::ios::showpos); // turn on the std::ios::showpos flag
	std::cout << 27 << '\n';

	std::cout.setf(std::ios::showpos | std::ios::uppercase); //是让进制大写
	std::cout << 27 << ' ' << 0x2a << '\n';

	std::cout.setf(std::ios::hex);
	std::cout << 27 << '\n';

	std::cout.unsetf(std::ios::dec);
	std::cout.setf(std::ios::hex);
	std::cout << 27 << '\n';

	std::cout.setf(std::ios::hex, std::ios::basefield); //后面加mask 可以指定设置那个效果
	std::cout << 27 << '\n';

	std::cout << std::hex << 27 << '\n';
	std::cout << 28 << '\n';
	std::cout << std::dec << 29 << '\n'; //std::hex 和 std::dec 是冲突的 所以会覆盖

	std::cout << true << " " << false << '\n';
	std::cout.setf(std::ios::boolalpha);
	std::cout << true << " " << false << '\n';
	std::cout << std::noboolalpha << true << " " << false << '\n';
	std::cout << std::boolalpha << true << " " << false << '\n'; //noboolalpha boolalpha 冲突的

	std::cout << 5 << '\n';
	std::cout.setf(std::ios::showpos);
	std::cout << 5 << '\n';
	std::cout << std::noshowpos << 5 << '\n';

	std::cout << 12345678.9 << '\n';
	std::cout.setf(std::ios::uppercase); //进制大写
	std::cout << 12345678.9 << '\n';
	std::cout << std::nouppercase << 12345678.9 << '\n';
	std::cout << std::uppercase << 12345678.9 << '\n';

	std::cout << 27 << '\n';
	std::cout.setf(std::ios::dec, std::ios::basefield);
	std::cout << 27 << '\n';
	std::cout.setf(std::ios::oct, std::ios::basefield);
	std::cout << 27 << '\n';
	std::cout.setf(std::ios::hex, std::ios::basefield);
	std::cout << 27 << '\n';
	std::cout << std::dec << 27 << '\n';
	std::cout << std::oct << 27 << '\n';
	std::cout << std::hex << 27 << '\n';

	//默认是保留小数点
	std::cout << std::setprecision(3) << 123.456 << '\n';
	std::cout << std::setprecision(4) << 123.456 << '\n';
	std::cout << std::setprecision(5) << 123.456 << '\n';
	std::cout << std::setprecision(6) << 123.456 << '\n';
	std::cout << std::setprecision(7) << 123.456 << '\n';

	std::cout << std::scientific << '\n'; //使用科学计数法
	std::cout << std::setprecision(3) << 123.456 << '\n';
	std::cout << std::setprecision(4) << 123.456 << '\n';
	std::cout << std::setprecision(5) << 123.456 << '\n';
	std::cout << std::setprecision(6) << 123.456 << '\n';
	std::cout << std::setprecision(7) << 123.456 << '\n';

	std::cout << std::fixed << '\n'; //保留几个小数点
	std::cout << std::setprecision(3) << 123.456 << '\n';
	std::cout << std::setprecision(4) << 123.456 << '\n';
	std::cout << std::setprecision(5) << 123.456 << '\n';
	std::cout << std::setprecision(6) << 123.456 << '\n';
	std::cout << std::setprecision(7) << 123.456 << '\n';

	std::cout << std::showpoint << '\n'; //一定显示小数点 并且保留几位
	std::cout << std::setprecision(3) << 123.456 << '\n';
	std::cout << std::setprecision(4) << 123.456 << '\n';
	std::cout << std::setprecision(5) << 123.456 << '\n';
	std::cout << std::setprecision(6) << 123.456 << '\n';
	std::cout << std::setprecision(7) << 123.456 << '\n';

	std::cout.setf(std::ios::oct);

	std::cout << -12345 << '\n'; // print default value with no field width
	std::cout << std::setw(10) << -12345 << '\n'; // 默认空格居左
	std::cout << std::setw(10) << std::left << -12345 << '\n'; // 空格居左
	std::cout << std::setw(10) << std::right << -12345 << '\n'; // 空格居右
	std::cout << std::setw(10) << std::internal << -12345 << '\n'; // 空格居符号中间


	std::cout.fill('*'); //用*代替空格
	std::cout << -12345 << '\n'; // print default value with no field width
	std::cout << std::setw(10) << -12345 << '\n'; // print default with field width
	std::cout << std::setw(10) << std::left << -12345 << '\n'; // print left justified
	std::cout << std::setw(10) << std::right << -12345 << '\n'; // print right justified
	std::cout << std::setw(10) << std::internal << -12345 << '\n'; // print internally justified
}
