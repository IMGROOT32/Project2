
#include "Warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "Warrior";
	this->nickname = nickname;
	level = 1;	
	HP = 120;
	MP = 30;
	power = 20;
	defence = 10;
	accuracy = 80;
	speed = 10;
}

void Warrior::attack()
{
	cout << "Warrior Attack!!" << endl;
}