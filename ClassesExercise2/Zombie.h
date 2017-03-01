#pragma once

class Zombie
{
public:
	Zombie();
	~Zombie();

	void SetHealth(int nHealth);
	int GetHealth();

	void SetAttack(int nAttack);
	int GetAttack();

	char* GetOccupation();

private:
	int m_nHealth;
	int m_nAttack;
	char* m_szOccupation;
};