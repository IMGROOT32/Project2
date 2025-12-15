#include "Player.h"

Player::Player(string nickname)
{
	job_name = "";
	this->nickname = nickname;
	level = 0;
	HP = 0;
	MP = 0;
	power = 0;
	defence = 0;
	accuracy = 0;
	speed = 0;
}

void Player::printPlayerStatus() {
	cout << "------------------------------------" << endl;
	cout << "* 현재 능력치" << endl;
	cout << "닉네임: " << nickname << endl;
	cout << "직업: " << job_name << endl;
	cout << "Lv. " << level << endl;
	cout << "HP: " << HP << endl;
	cout << "MP: " << MP << endl;
	cout << "공격력: " << power << endl;
	cout << "방어력: " << defence << endl;
	cout << "정확도: " << accuracy << endl;
	cout << "속도: " << speed << endl;
	cout << "------------------------------------" << endl;
}

string Player::getJobName()
{
	return job_name;
}

string Player::getNickname()
{

}
int Player::getLevel()
{ 	

}
int Player::getHP()
{
	return HP;
}
int Player::getMP()
{
	return MP;
}
int Player::getPower()
{
	
}
int Player::getDefence()
{
	
}
int Player::getAccuracy()
{
	
}
int Player::getSpeed()
{
	
}

void Player::setNickname(string nickname)
{
	
}
void Player::setHP(int HP)
{
	this->HP = HP;	
}
void Player::setMP(int MP)
{
	this->MP = MP;
}
void Player::setPower(int power)
{
	
}
void Player::setDefence(int defence)
{
	
}
void Player::setAccuracy(int accuracy)
{
	
}
void Player::setSpeed(int speed)
{
	
}