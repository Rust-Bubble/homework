#include"head.h"

char symbol_produce(void) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 3);
	char symbols[] = { '+', '-', '*', '/' };
	return symbols[dis(gen)];
}