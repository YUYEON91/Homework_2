#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician()
{
	job_name = "마법사";
	HP += 50;
	MP += 30;
	power += 30;
	defence += 5;
	
}

Magician::Magician(string nickname)
{
	job_name = "마법사";
	setNickname(nickname);
	HP += 50;
	MP += 30;
	power += 30;
	defence += 5;
}

void Magician::attack()
{
	cout << "마법을 시전합니다!" << endl;
}

void Magician::attack(Monster* monster)
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