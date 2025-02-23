#include"head.h"

long calculator(int rank)
{
	
	long res;
	//产生运算符
	char sym1 = symbol_produce();
	//seed判定是否嵌套运算
	int fac1 ,fac2,seed = rank-2;
	switch (sym1)
	{
	case '+':
		fac1 = randomn(rank - 1, rank + 1);
		fac2 = randomn(rank - 1, rank + 1);
		res = fac1 + fac2;
		break;
	case '-':
		fac1 = randomn(rank - 1, rank + 1);
		fac2 = randomn(rank - 1, rank + 1);
		res = fac1 - fac2;
		break;
	case '*':
		fac1 = randomn(1, 2);
		fac2 = randomn(1, 2);
		res = fac1 * fac2;
		break;
	case '/':
		fac1 = randomn(1, 2);
		fac2 = randomn(1, 2);
		while (fac1 < fac2 || fac1 % fac2 != 0)
		{
			fac2 = randomn(1, 2);
		}
		res = fac1 / fac2;
		break;
	default:
		break;
	}
	if(seed < 0)std::cout << fac1 << sym1 << fac2 << "=";
	else {
		seed = randomn(0, 1) % 2;
		if (seed == 0) {
			calculator(rank, fac1);
			std::cout << sym1 << fac2 << "=";
		}
		else {
			std::cout << fac1 << sym1;
			calculator(rank, fac2);
			std::cout << "=";
		}
	}
	return res;
}

void calculator(int rank , int res )
{
	//产生结果
	int fac1 , fac2;
	char sym1 = symbol_produce();
	switch (sym1)
	{
	case '+':
		fac1 = randomn(rank - 1, rank + 1);
		fac2 = res - fac1;
		break;
	case '-':
		fac1 = randomn(rank - 1, rank + 1);
		fac2 = res + fac1;
		break;
	case '*':
		fac1 = randomn(1, 2);
		while (res % fac1 != 0) fac1 = randomn(1, 2);
		fac2 = res / fac1;
		break;
	case '/':
		fac1 = randomn(1, 2);
		fac2 = res * fac1;
		break;
	default:
		break;
	}
	if(rank<=2)std::cout << "("<<fac2 << sym1 << fac1<<")";
	else {
		int seed = randomn(0, 1) % 2;
		if (seed == 0) {
			std::cout << "(";
			calculator(rank, fac1);
			std::cout << sym1 << fac2<<")";
		}
		else {
			std::cout <<"("<< fac1 << sym1;
			calculator(--rank, fac2);
			std::cout << ")";
		}
	}
	
}