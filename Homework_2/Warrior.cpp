#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior()
{
	job_name = "전사";
	HP += 80;
	power += 10;
	defence += 5;
}



Warrior::Warrior(string nickname)
{
	job_name = "전사";
	setNickname(nickname);
	HP += 80;
	power += 10;
	defence += 5;
}

void Warrior::attack()
{
	cout << "검을 휘두릅니다!" << endl;
}

void Warrior::attack(Monster* monster)
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





























/*
void Warrior::attack(Monster* monster)
{
	//플레이어의 공격력-몬스터의 방어력을 계산하여 데미지로 정의
	//계산된 데미지가 0일 경우, 데미지를 1로 정의
	int damage = this->getPower() - monster->getDefence();
	if (damage < 0)
	{
	damage = 1;
	}
	cout << "검으로 몬스터를 공격합니다!" << endl;

	for(int i = 1; i <= 3; ++i)
	{
		cout << "검으로 " << monster->getName() <<"을(를)" << damage << "의 피해를 입혔습니다!" << endl;
		monster->setHP(monster->getHP() - damage);
	}
	if (monster->getHP() <= 0)
	{
		cout << "몬스터는 이미 쓰러졌습니다!" << endl;
		cout << "승리하였습니다!" << endl;
		cout << monster->getHP() << endl;
	}
    else
    {
        cout << " 몬스터는 죽지 않았습니다!" << endl;
		cout << " 몬스터 HP : " << monster->getHP() << endl;
    }
	
	//생존했을 경우 몬스터의 남은 HP출력
		//생존하지 못했을 경우 몬스터의 남은 HP출력, 승리 문구 출력
}
*/