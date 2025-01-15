#pragma once
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>
#include<fstream>
#include<string>
#include<sstream>
#include<stdio.h>
struct mood
{
	int score;
	int m;
	int lv;
	int ans_[3];
	int max;
	int time;
	int type;
};
//score:分数，m:第m关，lv:阶段：，ans_:产生的三个随机数,type:封盘时的状态，max:可尝试次数，time:已尝试次数

int randomn(int n);
void menu_main();
void menu_vice(bool win,mood md);
void record(mood md);
void search();
void start_game(mood md);
void rules();
mood con_game(void);

