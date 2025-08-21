#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string nickname)
    : nickname(nickname), level(1), HP(100), MP(50), power(10), defence(5), accuracy(80), speed(10) {
    job_name = "Unknown";
}

// Getter 함수들
string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

// Setter 함수들
void Player::setNickname(string nickname) { this->nickname = nickname; }
bool Player::setHP(int HP) {
    if (HP < 0) return false;
    this->HP = HP;
    return true;
}
bool Player::setMP(int MP) {
    if (MP < 0) return false;
    this->MP = MP;
    return true;
}
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }
