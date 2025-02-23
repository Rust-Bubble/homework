#include"user.h"

void match()
{
    user use;
    use.init(0,5);
	bool next = 1;
	int time = 0;
    while (next)
    {
        system("cls");
        time++;
        long input;
        long ans;
        if (time <= 10) ans = calculator(1);
        else if (time <= 20) ans = calculator(2);
        else ans = calculator(3);
        std::cin >> input;
        char abandon = getchar();
        if (input == ans) {
            std::cout << "对啦！" << std::endl;
            use.usewin(5);
        }
        else {
            int life = use.lifecheck();
            std::cout << "错啦！" << std::endl << "正确答案是" << ans << std::endl<<"当前还剩"<<life<<"次尝试机会，加油！"<<std::endl;
            next = use.uselose();
            if(!next) menu_2(next,use);
        }
        std::cout << "按c键继续，按x键退出" << std::endl;
        char c = getchar();
        if (c == 'c') continue;
        if (c == 'x') menu_2(next,use);
    }
}