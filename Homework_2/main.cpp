#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"

using namespace std;

int main()
{
	string jobs[] = { "전사", "마법사", "도적", "궁수" };
	int job_choice = 0;
	string nickname ;

	Player* player = nullptr;

	cout << "*닉네임을 입력해주세요 : ";
	cin >> nickname;

	cout << "<전직 시스템>" << endl;
	cout << nickname << "님, 환영합니다!" << endl;
	cout << "*원하시는 직업을 선택해주세요." << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << (i + 1) << "." << jobs[i] << endl;
	}

	cout << "선택 : ";
	cin >> job_choice;

	switch(job_choice) 
	{
	case 1:
		player = new Warrior(nickname);
		break;
		
	case 2:	
		player = new Magician(nickname);
		break;

	case 3:
		player = new Thief(nickname);
		break;

	case 4:
		player = new Archer(nickname);
		break;
	default:
		cout << "잘못된 입력입니다." << endl;
		return 1;
	}

	player->printPlayerStatus();

	cout << "몬스터가 생성됩니다." << endl;
	Monster* monster = new Monster();

	player->attack(monster);
	monster->attack(player);

	delete player;
	delete monster;


	// Monster 객체 생성 및 attack 호출
	/*
	Monster* monster = new Monster("고블린", 10, 5, 3); // 예시 생성자, Monster.h에 맞게 수정
	player->attack(monster);
	*/

	return 0;
}


void Player::printPlayerStatus()
{
	cout << "-------------------------------------------------" << endl;
	cout << "* 현재 능력치" << endl;
	cout << "닉네임 : " << nickname << endl;
	cout << "Lv. : " << level << endl;
	cout << "HP : " << HP << endl;
	cout << "MP : " << MP << endl;
	cout << "공격력 : " << power << endl;
	cout << "방어력 : " << defence << endl;
	cout << "정확도 : " << accuracy << endl;
	cout << "속도 : " << speed << endl;
	cout << "-------------------------------------------------" << endl;
}