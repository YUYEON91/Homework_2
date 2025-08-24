#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician()
{
	job_name = "������";
	HP += 50;
	MP += 30;
	power += 30;
	defence += 5;
	
}

Magician::Magician(string nickname)
{
	job_name = "������";
	setNickname(nickname);
	HP += 50;
	MP += 30;
	power += 30;
	defence += 5;
}

void Magician::attack()
{
	cout << "������ �����մϴ�!" << endl;
}

void Magician::attack(Monster* monster)
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