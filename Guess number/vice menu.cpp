#include"head.h"
void menu_vice(bool win,mood md)
{
	system("cls");
	if(md.type==1)
	{
		if (win == 0)std::cout << "You Lost" << std::endl;
		else std::cout << "����أ�" << std::endl;
	}
	std::cout << "��ǰ������" <<md.score<< std::endl;
	std::cout << "1.�������˵�" << std::endl
		<< "2.������Ϸ" << std::endl
		<< "3.��һ��" << std::endl;
there:
	std::cout<< "����ѡ���Ӧ�������Լ�����";
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
		std::cout << "����ɹ���";
		goto there;
	case 3:
		if (md.type == 1&&win==1)
		{
			system("cls");
			md.m++;
			start_game(md);
		}
		else {
			std::cout << "������ɵ�ǰ�ؿ�,";
			goto there;
		}
		break;
	default:
		goto there;
	}
	return;
}