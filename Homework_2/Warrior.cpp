#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "전사";
	cout << "* 전사로 전직하였습니다." << endl;
	HP = 80;
}

void Warrior::attack()
{
	cout << "검을 휘두릅니다!" << endl;
}
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
	monster->setHP(monster->getHP() - damage);
	
	cout << "슬라임에게 검으로 3의 피해를 입혔다!"; // 3번 출력

	//Player setHP -= damage;

	//생존했을 경우 몬스터의 남은 HP출력
		//생존하지 못했을 경우 몬스터의 남은 HP출력, 승리 문구 출력
	cout << "승리하였습니다!" << endl;

}