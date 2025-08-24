#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief()
{
	job_name = "����";
	HP += 50;
	power += 15;
	defence += 5;
	speed += 80;
}

Thief::Thief(string nickname)
{
	job_name = "����";
	setNickname(nickname);
	HP += 50;
	power += 15;
	defence += 5;
	speed += 80;
}

void Thief::attack()
{
	cout << "ǥâ�� �����ϴ�!" << endl;
}
void Thief::attack(Monster* monster)
{
	if (!monster)
	{
		cout << "���� ����� �����ϴ�.\n";
		return;
	}
	int damage = max(1, power - monster->getDefence());

	cout << monster->getName() << "����" << damage << "�� �������� �������ϴ�" << endl;

	int monsterHP = monster->getHP() - damage;
	if (monster->setHP(monsterHP))
	{
		cout << "������ ü���� " << monster->getHP() << " �� ���ҽ��ϴ�." << endl;
	}
	else
	{
		cout << "������ ü���� 0�� �Ǿ����ϴ�." << endl;
		cout << "�÷��̾ �¸��Ͽ����ϴ�." << endl;
	}
}