#include"head.h"
void menu_main()
{
	
	system("cls");
	std::cout << "主菜单" << std::endl
		<< "1.查看游戏规则" << std::endl
		<< "2.开始新游戏" << std::endl
		<< "3.继续游戏" << std::endl
		<< "4.查看历史纪录" << std::endl
		<< "5.设置游戏难度" << std::endl
		<< "6.退出游戏" << std::endl
		<<"输入选项对应的数字以继续：";
	there:
	int n;
	std::cin >> n;
	switch (n)
	{
	case 1:
		system("cls");
		rules();
		menu_main();
		break;
	case 2:
		system("cls");
		mood md;
		md.lv = 1;
		md.m = 1;
		md.time = 0;
		md.score = 0;
		md.max = 30;
		md.type = 1;
		start_game(md);
		break;
	case 3:
		mood md_1 = con_game();
		if (md_1.m != 0) {
			system("cls");
			start_game(md_1);
		}
		else std::cout << "你还没历史记录，快去开启新游戏罢！" << std::endl;
		goto there;
		break;
	case 4:
		system("cls");
		search();
		break;
	case 5:
		system("cls");
		std::cout << "输入你想要设置的难度系数：";
		int x;
		std::cin >> x;
		std::cout << "设置成功，按任意键进入游戏" << std::endl;
		char ch,dh;
		ch=getchar();
		dh = getchar();
		system("cls");
		mood md_2;
		md_2.lv = x;
		md_2.m = 1;
		md_2.time = 0;
		md_2.score = 0;
		md_2.max = 30;
		md_2.type = 1;
		start_game(md_2);
		break;
	case 6:return;
	default:
		std::cout << "请重新输入：";
		goto there;
	}
}