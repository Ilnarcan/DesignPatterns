
#include <iostream>
#include "Decorator.h"


void Decorator() {

	Beverage *beverage = new Espresso();
	std::cout << beverage->getDescription() + "  $" << beverage->cost() << std::endl;

	Beverage *beverage2 = new TatarTea();
	beverage2 = new Butter(beverage2);
	std::cout << beverage2->getDescription() + " $" << beverage2->cost() << std::endl;

	Beverage *beverage3 = new Milk(new Espresso());
	std::cout << beverage3->getDescription() + "  $" << beverage3->cost() << std::endl;

}
