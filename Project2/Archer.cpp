
#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "Archer";
	this->nickname = nickname;
	level = 1;
	HP = 80;
	MP = 50;
	power = 15;	
	defence = 5;
	accuracy = 90;
	speed = 15;
}

void Archer::attack()
{
	cout << "Archer Ataack!!" << endl;
}