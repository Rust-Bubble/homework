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
//score:������m:��m�أ�lv:�׶Σ���ans_:���������������,type:����ʱ��״̬��max:�ɳ��Դ�����time:�ѳ��Դ���

int randomn(int n);
void menu_main();
void menu_vice(bool win,mood md);
void record(mood md);
void search();
void start_game(mood md);
void rules();
mood con_game(void);

