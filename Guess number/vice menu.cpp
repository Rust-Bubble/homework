#include"head.h"
void menu_vice(bool win,mood md)
{
	system("cls");
	if(md.type==1)
	{
		if (win == 0)std::cout << "You Lost" << std::endl;
		else std::cout << "你过关！" << std::endl;
	}
	std::cout << "当前分数：" <<md.score<< std::endl;
	std::cout << "1.返回主菜单" << std::endl
		<< "2.保存游戏" << std::endl
		<< "3.下一关" << std::endl;
there:
	std::cout<< "输入选项对应的数字以继续：";
	int n;
	std::cin >> n;
	switch (n)
	{
	case 1:
		record(md);
		menu_main();
		break;
	case 2:
		record(md);
		std::cout << "保存成功，";
		goto there;
	case 3:
		if (md.type == 1&&win==1)
		{
			system("cls");
			md.m++;
			start_game(md);
		}
		else {
			std::cout << "请先完成当前关卡,";
			goto there;
		}
		break;
	default:
		goto there;
	}
	return;
}