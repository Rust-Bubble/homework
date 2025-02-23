#pragma once
#include"head.h"

class user
{
public:
	void init(int newscore = 0, int newlife = 5);
	void usewin(int grade);
	bool uselose();
	int check();
	int lifecheck();
private:
	int score,life;
};
void menu_2(bool win, user use);

