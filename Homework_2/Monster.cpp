#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster(string name)
    : name(), HP(10),power(30), defence(10), speed(10) {
    name = "몬스터";
}
void attack()
{
    cout << "몬스터가 공격합니다." << endl;
}


// Getter 함수들
string Monster::getName() { return name; }
int Monster::getHP() { return HP; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

// Setter 함수들
void Monster::setName(string name) { this->name = name; }
bool Monster::setHP(int HP) 
{
    if (HP < 0) return false;
    this->HP = HP;
    return true;
}
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }
