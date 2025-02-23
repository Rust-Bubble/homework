#include"user.h"

void menu_2(bool win,user use)
{
	system("cls");
	int score = use.check();
	if (win) std::cout << "暂停" << std::endl<<"当前分数："<<score<< std::endl;
	else std::cout << "游戏结束" << std::endl << "当前分数：" << score<< std::endl;
	int input;
	std::cout << "1.返回主菜单" << std::endl
		<< "2.练习模式" << std::endl
		<< "3.退出" << std::endl
		<< "请输入对应数字以继续" << std::endl;
there:
	std::cin >> input;

	switch (input)
	{
	case  1:
		system("cls");
		menu_1();
		break;
	case 2:
		system("cls");
		exercise();
		break;
	case 3:
		exit(0);
	default:
		std::cout << "无效输入";
		goto there;
	}


}