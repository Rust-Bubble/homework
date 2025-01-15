#include"head.h"
void start_game(mood md)
{
	/*position:位置和数字都正确的个数；
	content：仅数字正确个数；
	win:判断是否过关；
	max:猜次数的上限；
	time：猜的次数；
	n:第n回；
	score：当前获得的总成绩*/
	int ans[3],position = 0, content,grade=0;
	bool win = 0;
	//生成三个随机数
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
	std::cout << "      " << "第" << md.lv << "阶段";
	std::cout << "第" << md.m << "关" << std::endl;
		/*std::cout << ans[0] << " " << ans[1] << " " << ans[2] << std::endl;*/
		do{
			md.time++;
			position = 0;
			content = 0;
		std::cout << "请输入三个数字：";
		
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
		std::cout << "位置和数字都正确的有：" << position << "个；" << std::endl
			<< "数字正确但位置不正确的有：" << content << "个。" << std::endl
			<< "你还有" << md.max - md.time << "次尝试机会,加油。" << std::endl
			<< "按b键返回，按其他键继续" << std::endl;
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
		md.type = 1;//完成一轮type=1
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

