#include"head.h"
int main()
{

	std::cout << "        " << "������Ϸ" << std::endl << "�������������Ϸ";
	char* r = new char;
	*r = getchar();
	delete(r);
	menu_main();
	return 0;
}