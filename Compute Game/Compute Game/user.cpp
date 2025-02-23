#include "user.h"

void user::init(int newscore, int newlife)
{
	score = newscore;
	life = newlife;
}

void user::usewin(int grade)
{
	score += grade;
}

bool user::uselose()
{
		life--;
		if (life) return true;
		else  return false;	
}

int user::check()
{
	return score;
}

int user::lifecheck()
{
	return life;
}
