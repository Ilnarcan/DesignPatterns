

#ifndef _DECORATOR_H_
#define _DECORATOR_H_

//  This .h describes Condiment(base) and Decorator classes

#include "Beverage.h"

void Decorator();

class Condiment : public Beverage {

private:
	Beverage *bvr;


protected:
	Condiment(Beverage *beverage) { this->bvr = beverage; }
	std::string getDescription() { return bvr->getDescription(); }
	double cost() { return bvr->cost(); }

};

class Butter : public Condiment {

public:

	Butter(Beverage *beverage) : Condiment(beverage) {};
	std::string getDescription() { return Condiment::getDescription() + ", Butter"; }
	double cost() { return .30 + Condiment::cost(); }

};

class Milk : public Condiment {

public:

	Milk(Beverage *beverage) : Condiment(beverage) {};
	std::string getDescription() { return Condiment::getDescription() + ", Milk"; }
	double cost() { return .30 + Condiment::cost(); }

};


#endif 
