
#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>


// This .h describes recipe classes Beverage(base)

class Beverage {

protected:
	std::string description;

public:
	virtual std::string getDescription() { return description; };
	virtual double cost() = 0;
	Beverage() {};

};

class TatarTea : public Beverage {

public:
	TatarTea() { description = "TatarTea"; }
	double cost() { return 1.50; }

};

class Espresso : public Beverage {

public:
	Espresso() { description = "Espresso"; }
	double cost() { return 2.0; }

};

#endif