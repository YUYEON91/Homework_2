#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "����";
	cout << "* ����� �����Ͽ����ϴ�." << endl;
	HP = 80;
}

void Warrior::attack()
{
	cout << "���� �ֵθ��ϴ�!" << endl;
}
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
	monster->setHP(monster->getHP() - damage);
	
	cout << "�����ӿ��� ������ 3�� ���ظ� ������!"; // 3�� ���

	//Player setHP -= damage;

	//�������� ��� ������ ���� HP���
		//�������� ������ ��� ������ ���� HP���, �¸� ���� ���
	cout << "�¸��Ͽ����ϴ�!" << endl;

}