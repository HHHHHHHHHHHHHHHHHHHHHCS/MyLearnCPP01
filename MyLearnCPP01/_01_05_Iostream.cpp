#include  "_01_05_Iostream.h"

void _01_05_Iostream::Test()
{
	Print();
	EndOrN();
	Input();
}

void _01_05_Iostream::Print()
{
	std::cout << "10";
	int x = 10;
	std::cout << "X is " << x << std::endl;
}

/*
 * \nЧ�ʱ�endlЧ�ʺ�
 * \nֻ���ƶ��˹��
 * ��endl���в��ҽ�����һ�����
 */
void _01_05_Iostream::EndOrN()
{
	std::cout << "xxxxx" << std::endl;
	std::cout << "xxxx\n";
}

void _01_05_Iostream::Input()
{
	std::cout << "Enter number";
	int x{};//������ζ�Ҫ�Լ���ֵһ����ʼֵ ����BUG
	std::cin >> x;
	std::cout << "You entered" << x << '\n';
}
