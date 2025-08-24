#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster()
{
    name = "몬스터";
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
}
void attack()

Monster::Monster(string name)
{
    this->name = name;
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
}

void Monster::attack(Player* player)
{
    if (!player)
    {
        cout << "공격 대상이 없습니다.\n";
        return;
    }

    int damage = max(1, power - player->getDefence());

    cout << player->getNickname() << "에게 " << damage << "의 데미지를 입혔습니다." << endl;
    int playerHP = player->getHP() - damage;
    if (Player->setHP(PlayerHP))
    {
        cout << "플레이어의 체력이 " << player->getHP() << " 가 남았습니다." << endl;
    }
    else
    {
        cout << "플레이어의 체력이 0이 되었습니다." << endl;
        cout << "몬스터가 승리 하였습니다." << endl;
    }
}

// Getter 함수들
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


// Setter 함수들
void Monster::setName(string name)
{
    this->naem = name;
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
