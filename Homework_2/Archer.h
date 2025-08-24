#pragma once
#include "player.h"
#include "Monster.h"


class Archer : public Player
{
public:
	Archer();
	Archer(string nickname);
	void attack() override;
	void attack(Monster* monster) override;

};
