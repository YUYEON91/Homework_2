#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer()
{
	job_name = "궁수";
	HP += 50;
	power += 10;
	defence += 5;
	accuracy = 80;
}

Archer::Archer(string nickname)
{
	job_name = "궁수";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
	accuracy = 80;
}

void Archer::attack()
{
	cout << "활시위를 당깁니다!" << endl;
}

void Archer::attack(Monster* monster)
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