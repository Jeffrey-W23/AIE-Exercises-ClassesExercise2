#include "Zombie.h"
#include <iostream>

Zombie::Zombie()
{
	m_nHealth = (rand()%51) + 50;
	m_nAttack = (rand() % 11) + 10;

	int nRandOcc = rand()%10;
	switch(nRandOcc)
	{
		case 0:		m_szOccupation = "iPhone";			break;
		case 1:		m_szOccupation = "iPad";			break;
		case 2:		m_szOccupation = "AirPods";			break;
		case 3:		m_szOccupation = "Apple Watch";		break;
		case 4:		m_szOccupation = "MacBook";			break;
		case 5:		m_szOccupation = "iCloud";			break;
		case 6:		m_szOccupation = "iMac";			break;
		case 7:		m_szOccupation = "AirDrop";			break;
		case 8:		m_szOccupation = "Apple Pencil";	break;
		case 9:		m_szOccupation = "Night Shift";		break;
	}
}

Zombie::~Zombie()
{
}

void Zombie::SetHealth(int nHealth)
{
	m_nHealth = nHealth;
}

int Zombie::GetHealth()
{
	return m_nHealth;
}

void Zombie::SetAttack(int nAttack)
{
	m_nAttack = nAttack;
}

int Zombie::GetAttack()
{
	return m_nAttack;
}

char* Zombie::GetOccupation()
{
	return m_szOccupation;
}