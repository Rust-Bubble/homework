#include"head.h"
void start_game(mood md)
{
	/*position:λ�ú����ֶ���ȷ�ĸ�����
	content����������ȷ������
	win:�ж��Ƿ���أ�
	max:�´��������ޣ�
	time���µĴ�����
	n:��n�أ�
	score����ǰ��õ��ܳɼ�*/
	int ans[3],position = 0, content,grade=0;
	bool win = 0;
	//�������������
	if (md.type==1)
	{
		md.type = 0;
		for (int i = 0; i < 3; i++)
		{
			ans[i] = randomn(md.lv);
			if (i > 0) {
				for(int j=i;j>0;j--)
				{
					while (ans[j] == ans[j - 1])
					{
						ans[j] = randomn(md.lv);
					}
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			ans[i] = md.ans_[i];
		}
	}
	if (md.m == 0)md.m = 1;
	std::cout << "      " << "��" << md.lv << "�׶�";
	std::cout << "��" << md.m << "��" << std::endl;
		/*std::cout << ans[0] << " " << ans[1] << " " << ans[2] << std::endl;*/
		do{
			md.time++;
			position = 0;
			content = 0;
		std::cout << "�������������֣�";
		
		for (int i = 0; i < 3; i++)
		{
			int in;
			std::cin >> in;
			if (in == ans[i]) {
				position++;
				grade += 2;
			}
			else
			{
				for (int j = 0; j < 3; j++)
				{
					if (in == ans[j]) {
						content++;
						grade += 1;
					}
				}
			}
		}
		if (md.time ==md.max)break;
		if (position == 3) {
			win = 1;
			break;
		}
		std::cout << "λ�ú����ֶ���ȷ���У�" << position << "����" << std::endl
			<< "������ȷ��λ�ò���ȷ���У�" << content << "����" << std::endl
			<< "�㻹��" << md.max - md.time << "�γ��Ի���,���͡�" << std::endl
			<< "��b�����أ�������������" << std::endl;
		char ch,dh;
		ch = getchar();
		dh = getchar();
		

		if (dh == 'b') {
			md.ans_[0] = ans[0];
			md.ans_[1] = ans[1];
			md.ans_[2] = ans[2];
			record(md);
			menu_vice(win, md);
			return;
		}
		else continue;
		
		
	} while (position!=3);
		md.type = 1;//���һ��type=1
		if (grade >= 80)
		{
			win = 1;
		}
		if (win == 1) {
			md.score += md.lv * 100 - md.time;
		}
		md.time = 0;
	if (md.m == 3) {
		md.m = 0;
		md.lv++;
	}
	menu_vice(win,md);
}

