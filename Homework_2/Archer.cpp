#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer()
{
	job_name = "�ü�";
	HP += 50;
	power += 10;
	defence += 5;
	accuracy = 80;
}

Archer::Archer(string nickname)
{
	job_name = "�ü�";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
	accuracy = 80;
}

void Archer::attack()
{
	cout << "Ȱ������ ���ϴ�!" << endl;
}

void Archer::attack(Monster* monster)
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