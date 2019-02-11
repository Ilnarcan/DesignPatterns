
#include <iostream>
#include "Strategy.h"

void Character::PerformFight() {
	weapon->useWeapon();
}

void Character::setWeapon(WeaponBehavior *wb) {
	std::cout << "Changing weapon..." << std::endl;
	this->weapon = wb;
}

Human::Human() : Character() {
	weapon = new SwordBehavior();
}
void Human::fight() {
	std::cout << "Prepare to fight filthy orc!" << std::endl;
	PerformFight();
}
void Human::shout() {
	std::cout << "FOR THE ALLIANCE!!!" << std::endl;
}

Orc::Orc() {
	weapon = new AxeBehavior();
}
void Orc::fight() {
	std::cout << "Prepare to fight tasty human!" << std::endl;
	PerformFight();
}
void Orc::shout() {
	std::cout << "FOR THE HORDE!!!" << std::endl;
}


void Strategy() {
	Character *h = new Human();
	Character *o = new Orc();

	WeaponBehavior *sword = new SwordBehavior();

	h->shout();
	h->fight();

	o->shout();
	o->fight();

	h->PerformFight();
	o->PerformFight();

	o->setWeapon(sword);
	o->PerformFight();

}