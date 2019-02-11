
#include <iostream>
#include "WeaponBehavior.h"

void AxeBehavior::useWeapon() {
	std::cout << "Axe hit" << std::endl;
}

void SwordBehavior::useWeapon() {
	std::cout << "Sword hit" << std::endl;
}