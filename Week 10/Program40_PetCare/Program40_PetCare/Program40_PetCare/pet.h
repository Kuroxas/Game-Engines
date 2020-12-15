#ifndef PET_H
#define PET_H
#include <iostream>
using namespace std;

class pet
{
public:
	pet(int hunger, int boredom)
	{
		hunger = 4;
		boredom = 4;
	}
	~pet();
	
	virtual void talk()
	{
		cout << "I am your pet and I feel ";
		int mood = GetMood();
		if (mood > 15)
			cout << "mad" << endl;
		else if (mood > 10)
			cout << "frustrated" << endl;
		else if (mood > 5)
			cout << "okay" << endl;
		else
			cout << "happy" << endl;
	}

	void feed(int food);
	void play(int fun);

private:
	int m_hunger = 0;
	int m_boredom = 0;

protected:
	inline const int GetMood()
	{
		return(m_hunger + m_boredom);
	}
	void PassingTime(int time)
	{
		time += 1;
	}
};

class Dog : public pet
{
public:
	void talk()
	{
		cout << "Woof!" << endl;
	}
};

#endif