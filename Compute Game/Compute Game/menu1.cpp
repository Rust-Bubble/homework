#include"head.h"

void menu_1()
{
	system("cls");
	int input;
	std::cout << "���˵�" << std::endl
		<< "1.��ϰģʽ" << std::endl
		<< "2.��Ϸģʽ" << std::endl
		<< "3.�˳�" << std::endl
		<< "�������Ӧ�����Լ���" << std::endl;
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
			std::cout<<"��Ч����";
			goto there;
		}
	
	
}