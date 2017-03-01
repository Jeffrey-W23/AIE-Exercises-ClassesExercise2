#pragma once

#include "zombie.h"

class Game
{
public:
	Game(int nZombieCount);
	~Game();

	bool Update();

private:

	Zombie** m_apZombies;
	
	int m_nZombieCount;
	int m_nZombiesLeft;
};