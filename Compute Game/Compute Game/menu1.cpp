#include"head.h"

void menu_1()
{
	system("cls");
	int input;
	std::cout << "主菜单" << std::endl
		<< "1.练习模式" << std::endl
		<< "2.游戏模式" << std::endl
		<< "3.退出" << std::endl
		<< "请输入对应数字以继续" << std::endl;
	there:
	std::cin >> input;
	
		switch (input)
		{
		case  1:
			system("cls");
			exercise();
			break;
		case 2:
			system("cls");
			match();
			break;
		case 3:
			exit(0);
		default:
			std::cout<<"无效输入";
			goto there;
		}
	
	
}