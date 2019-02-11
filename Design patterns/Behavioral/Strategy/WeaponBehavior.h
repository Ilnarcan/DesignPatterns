#ifndef _WEAPONBEHAVIOR_H_
#define _WEAPONBEHAVIOR_H_

#include <iostream>


class WeaponBehavior { // interface
public:
	virtual void useWeapon() = 0;
};

class AxeBehavior : public WeaponBehavior {
public:
	void useWeapon();
};

class SwordBehavior : public WeaponBehavior {
public:
	void useWeapon();
};


#endif // !_WEAPONBEHAVIOR_H_