#include "_02_09_UsingNamespace.h"

//using namespace std;在头文件中定义了

//但是避免在程序顶部使用指令（例如使用namespace std;）。它们违反了首先添加名称空间的原因。

void _02_09_UsingNamespace::Test()
{
	cout << "Eat rich" << endl;
}
