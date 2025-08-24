#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief()
{
	job_name = "도적";
	HP += 50;
	power += 15;
	defence += 5;
	speed += 80;
}

Thief::Thief(string nickname)
{
	job_name = "도적";
	setNickname(nickname);
	HP += 50;
	power += 15;
	defence += 5;
	speed += 80;
}

void Thief::attack()
{
	cout << "표창을 던집니다!" << endl;
}
void Thief::attack(Monster* monster)
{
	if (!monster)
	{
		cout << "공격 대상이 없습니다.\n";
		return;
	}
	int damage = max(1, power - monster->getDefence());

	cout << monster->getName() << "에게" << damage << "의 데미지를 입혔습니다" << endl;

	int monsterHP = monster->getHP() - damage;
	if (monster->setHP(monsterHP))
	{
		cout << "몬스터의 체력이 " << monster->getHP() << " 가 남았습니다." << endl;
	}
	else
	{
		cout << "몬스터의 체력이 0이 되었습니다." << endl;
		cout << "플레이어가 승리하였습니다." << endl;
	}
}