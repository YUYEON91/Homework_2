#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "����";
	cout << "* �������� �����Ͽ����ϴ�." << endl;
	speed = 80;
}
void Thief::attack()
{
	cout << "ǥâ�� �����ϴ�!" << endl;
}
void Thief::attack(Monster* monster)
{
	//�÷��̾��� ���ݷ�-������ ������ ����Ͽ� �������� ����
	//���� �������� 0�� ���, �������� 1�� ����
	int damage = this->getPower() - monster->getDefence();
	if (damage < 0)
	{
		damage = 1;
	}


	cout << "ǥâ���� ���͸� �����մϴ�!" << endl;
    monster->setHP(monster->getHP() - damage);

	cout << "�����ӿ��� ǥâ���� ????�� ���ظ� ������!"; // 3�� ���

	//Player setHP -= damage;

	//�������� ��� ������ ���� HP���
		//�������� ������ ��� ������ ���� HP���, �¸� ���� ���
	cout << "�¸��Ͽ����ϴ�!" << endl;

}