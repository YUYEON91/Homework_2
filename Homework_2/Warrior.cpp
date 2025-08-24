#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior()
{
	job_name = "����";
	HP += 80;
	power += 10;
	defence += 5;
}



Warrior::Warrior(string nickname)
{
	job_name = "����";
	setNickname(nickname);
	HP += 80;
	power += 10;
	defence += 5;
}

void Warrior::attack()
{
	cout << "���� �ֵθ��ϴ�!" << endl;
}

void Warrior::attack(Monster* monster)
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





























/*
void Warrior::attack(Monster* monster)
{
	//�÷��̾��� ���ݷ�-������ ������ ����Ͽ� �������� ����
	//���� �������� 0�� ���, �������� 1�� ����
	int damage = this->getPower() - monster->getDefence();
	if (damage < 0)
	{
	damage = 1;
	}
	cout << "������ ���͸� �����մϴ�!" << endl;

	for(int i = 1; i <= 3; ++i)
	{
		cout << "������ " << monster->getName() <<"��(��)" << damage << "�� ���ظ� �������ϴ�!" << endl;
		monster->setHP(monster->getHP() - damage);
	}
	if (monster->getHP() <= 0)
	{
		cout << "���ʹ� �̹� ���������ϴ�!" << endl;
		cout << "�¸��Ͽ����ϴ�!" << endl;
		cout << monster->getHP() << endl;
	}
    else
    {
        cout << " ���ʹ� ���� �ʾҽ��ϴ�!" << endl;
		cout << " ���� HP : " << monster->getHP() << endl;
    }
	
	//�������� ��� ������ ���� HP���
		//�������� ������ ��� ������ ���� HP���, �¸� ���� ���
}
*/