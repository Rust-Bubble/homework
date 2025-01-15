#include"head.h"
int main()
{

	std::cout << "        " << "猜数游戏" << std::endl << "按任意键启动游戏";
	char* r = new char;
	*r = getchar();
	delete(r);
	menu_main();
	return 0;
}