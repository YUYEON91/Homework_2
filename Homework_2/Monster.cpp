#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster()
{
    name = "����";
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
}

Monster::Monster(string name)
{
    this->name = "����";
    this->HP = 10;
    this->power = 30;
    this->defence = 10;
    this->speed = 10;
}

void Monster::attack(Player* player)
{
    if (!player)
    {
        cout << "���� ����� �����ϴ�.\n";
        return;
    }

    int damage = max(1, power - player->getDefence());

    if (HP <= 0)
    {
        return;
    }

    cout << player->getNickname() << "���� " << damage << "�� �������� �������ϴ�." << endl;
    int playerHP = player->getHP() - damage;
    if (player->setHP(playerHP))
    {
        cout << "�÷��̾��� ü���� " << player->getHP() << " �� ���ҽ��ϴ�." << endl;
    }
    else
    {
        cout << "�÷��̾��� ü���� 0�� �Ǿ����ϴ�." << endl;
        cout << "���Ͱ� �¸� �Ͽ����ϴ�." << endl;
    }
}

// Getter �Լ���
string Monster::getName() 
{ 
    return name; 
}
int Monster::getHP() 
{ 
    return HP; 
}
int Monster::getPower() 
{ 
    return power; 
}
int Monster::getDefence() 
{ 
    return defence; 
}
int Monster::getSpeed()
{
    return speed;
}

// Setter �Լ���
void Monster::setName(string name)
{
        this->name = name;
}

bool Monster::setHP(int HP) 
{
    if (HP >= 1)
    {
        this->HP = HP;
        return true;
    }
    else
    {
        this->HP = 0;
        return false;
    }
}
void Monster::setPower(int power) 
{ 
    this->power = power; 
}
void Monster::setDefence(int defence) 
{ 
    this->defence = defence; 
}
void Monster::setSpeed(int speed) 
{ 
    this->speed = speed; 
}
