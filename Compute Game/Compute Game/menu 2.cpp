#include"user.h"

void menu_2(bool win,user use)
{
	system("cls");
	int score = use.check();
	if (win) std::cout << "��ͣ" << std::endl<<"��ǰ������"<<score<< std::endl;
	else std::cout << "��Ϸ����" << std::endl << "��ǰ������" << score<< std::endl;
	int input;
	std::cout << "1.�������˵�" << std::endl
		<< "2.��ϰģʽ" << std::endl
		<< "3.�˳�" << std::endl
		<< "�������Ӧ�����Լ���" << std::endl;
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
		std::cout << "��Ч����";
		goto there;
	}


}