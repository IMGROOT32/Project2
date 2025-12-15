
#include "Magician.h"

Magician::nickname(string nickname) : Player(Nickname)
{
	job_name = "Magician";
	this->Magician = nickname;
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