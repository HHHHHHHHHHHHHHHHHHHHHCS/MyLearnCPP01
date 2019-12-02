#include  "MyLearnCPP01.h"
#include "_08_14_ShallowSeepCopying.h"

int main()
{
	_08_14_ShallowSeepCopying::Test();
	return 0;
}

//命令行参数  --->项目 配置属性 调试
//等价于int main(int argc, char** argv) 
//argc = argv[].length 即参数的总数
/* 06 12 命令行用
int main(int argc, char *argv[])
{
	_06_12_CommandLineArguments::Test(argc, argv);
	return 0;
}
*/
