#include"head.h"

void exercise()
{
	bool next = 1;
	int time = 0;
	while (next)
	{
		system("cls");
		time++;
		long input;
		long ans;
		if (time <= 10) ans = calculator(1);
		else if(time<=20)ans = calculator(2);
		else ans = calculator(3);
		std::cin >> input;
		char abandon = getchar();
		if (input == ans) std::cout << "对啦！" << std::endl;
		else std::cout << "错啦！" << std::endl << "正确答案是" << ans << std::endl;
		std::cout << "按c键继续，按x键退出" << std::endl;
		char c = getchar();
		if (c == 'c') continue;
		if (c == 'x') menu_1();
	}  
}