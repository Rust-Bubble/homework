#include"head.h"

int main()
{
	std::cout << "天天心算" << std::endl << "输入任意键启动";
	char ch;
	if(ch=getchar())menu_1();
	return 0;
}