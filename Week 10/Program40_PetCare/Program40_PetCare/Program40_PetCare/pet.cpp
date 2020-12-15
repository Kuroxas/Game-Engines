#include <iostream>
#include "pet.h"

pet::pet(int hunger, int boredom)
{
	cout << "A new pet has arrived!" << endl;
	m_hunger = hunger;
	m_boredom = boredom;
}

void pet::feed(int food)
{
	cout << "Your pet has eaten!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
		m_hunger = 0;
	PassingTime(time);
}

void pet::play(int fun)
{
	cout << "Your pet has eaten!" << endl;
	m_boredom -= fun;
	if (m_boredom < 0)
		m_boredom = 0;
	PassingTime(time);
}