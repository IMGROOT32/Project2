
#include "Magician.h"

Magician::Magician (string nickname) : Player(nickname)
{
	job_name = "Magician";
	this->nickname = nickname;
	level = 1;
	HP = 70;
	MP = 100;
	power = 25;
	defence = 3;
	accuracy = 85;
	speed = 12;
}

void Magician::attack()
{
	cout << "Magician Attack!!" << endl;
}
void Magician::defend()
{
	cout << "Magician Defend!!" << endl;
}