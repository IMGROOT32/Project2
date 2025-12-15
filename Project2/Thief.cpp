#include "Thief.h"

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "Thief";
	this->nickname = nickname;
	level = 1;
	HP = 90;
	MP = 40;
	power = 18;
	defence = 7;
	accuracy = 88;
	speed = 20;
}

void Thief::attack()
{
	cout << "Thief Attack!!" << endl;
}
