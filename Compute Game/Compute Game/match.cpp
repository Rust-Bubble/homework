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
            std::cout << "������" << std::endl;
            use.usewin(5);
        }
        else {
            int life = use.lifecheck();
            std::cout << "������" << std::endl << "��ȷ����" << ans << std::endl<<"��ǰ��ʣ"<<life<<"�γ��Ի��ᣬ���ͣ�"<<std::endl;
            next = use.uselose();
            if(!next) menu_2(next,use);
        }
        std::cout << "��c����������x���˳�" << std::endl;
        char c = getchar();
        if (c == 'c') continue;
        if (c == 'x') menu_2(next,use);
    }
}