#pragma once
#include <string>
#include "Player.h"

using namespace std;

class Player;

class Monster
{
public:
	Monster();
	Monster(string name);

	virtual void attack(Player* player);

    //���� get�Լ�
	string getName();
	int getHP();
	int getPower();
	int getDefence();
	int getSpeed();

	//���� set�Լ�
	void setName(string name);
	bool setHP(int HP);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);

protected:
	//attributes
	string name; //������ �̸�
	int HP; //������ ü��
	int power; //������ ���ݷ�
	int defence; //������ ����
	int speed; //������ ���ǵ�
};


