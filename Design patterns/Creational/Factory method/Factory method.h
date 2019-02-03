
#ifndef _FACTORYMETHOD_H_
#define _FACTORYMETHOD_H_

#include <iostream>
#include <string>

void FactoryMethod();


class Transport {
public:
	virtual std::string deliver() = 0;
	virtual ~Transport() = default;
};

class Truck : public Transport {
public:
	std::string deliver() override { return "This is a truck!"; }
};

class Ship : public Transport {
public:
	std::string deliver() override { return "This is a ship!"; }
};

class Logistics {
public:
	virtual Transport* createTransport() = 0;
	virtual ~Logistics() = default;
};

class RoadLogistics : public Logistics {
public:
	Transport * createTransport()override { return new Truck(); }
};

class SeaLogistics : public Logistics {
public:
	Transport * createTransport()override { return new Ship(); }
};


#endif // !_FACTORYMETHOD_H_
