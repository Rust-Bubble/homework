#include"head.h"

int randomn(int a,int b)
{
	
	std::random_device rd;  // 用于种子
	std::mt19937 gen(rd()); // 使用Mersenne Twister引擎
	std::uniform_int_distribution<> dis(pow(10, a), pow(10, b) - 1); // 定义范围

	return dis(gen);
}