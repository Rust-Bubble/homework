#include"head.h"
int randomn(int n)
{
	srand((unsigned)time(NULL));
	int bot = pow(10, 0),
		top = pow(10, n);
	int b = rand();
	int a = bot+rand() % (top-bot) ;
	return a;
}