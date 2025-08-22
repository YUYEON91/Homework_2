#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Player;

class Monster
{
public:
	Monster(string name);

	virtual void attack(Player* player) = 0;

    //몬스터 get함수
	string getName();
	int getHP();
	int getPower();
	int getDefence();
	int getSpeed();

	//몬스터 set함수
	void setName(string name);
	bool setHP(int HP);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);

protected:
	string name; //몬스터의 이름
	int HP; //몬스터의 체력
	int power; //몬스터의 공격력
	int defence; //몬스터의 방어력
	int speed; //몬스터의 스피드
};


