#include"head.h"

int randomn(int a,int b)
{
	
	std::random_device rd;  // ��������
	std::mt19937 gen(rd()); // ʹ��Mersenne Twister����
	std::uniform_int_distribution<> dis(pow(10, a), pow(10, b) - 1); // ���巶Χ

	return dis(gen);
}