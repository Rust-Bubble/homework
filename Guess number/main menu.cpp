#include"head.h"
void menu_main()
{
	
	system("cls");
	std::cout << "���˵�" << std::endl
		<< "1.�鿴��Ϸ����" << std::endl
		<< "2.��ʼ����Ϸ" << std::endl
		<< "3.������Ϸ" << std::endl
		<< "4.�鿴��ʷ��¼" << std::endl
		<< "5.������Ϸ�Ѷ�" << std::endl
		<< "6.�˳���Ϸ" << std::endl
		<<"����ѡ���Ӧ�������Լ�����";
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
		else std::cout << "�㻹û��ʷ��¼����ȥ��������Ϸ�գ�" << std::endl;
		goto there;
		break;
	case 4:
		system("cls");
		search();
		break;
	case 5:
		system("cls");
		std::cout << "��������Ҫ���õ��Ѷ�ϵ����";
		int x;
		std::cin >> x;
		std::cout << "���óɹ����������������Ϸ" << std::endl;
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
		std::cout << "���������룺";
		goto there;
	}
}