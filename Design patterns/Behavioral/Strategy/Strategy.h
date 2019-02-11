
#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <iostream>
#include "WeaponBehavior.h"

void Strategy();

class Character {
public:
	WeaponBehavior * weapon;

	void PerformFight();
	void setWeapon(WeaponBehavior *wb);
	virtual void fight() = 0;
	virtual void shout() = 0;

};

class Human : public Character {
public:
	Human();
	void fight();
	void shout();
};

class Orc : public Character {
public:
	Orc();
	void fight();
	void shout();
};


#endif // !_STRATEGY_H_