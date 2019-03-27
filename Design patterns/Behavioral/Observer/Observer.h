
#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
#include <vector>
#include <string>

void ObserverGo();

// "INDEPENDENT" - "Subject" abstraction

class Newspaper {

	std::vector <class Observer *> views;
	int value;
	std::string name;

public:
	Newspaper(std::string nameCompany);
	void add(Observer *obs);
	void del(Observer *obs);
	void makeChanges(int val);
	int getVal();
	std::string getName();
	void inform();
};


// "DEPENDENT" - "Observer" abstraction

class Observer {

	Newspaper *model;

public:
	Observer(Newspaper *news);
	virtual void update() = 0;

protected:
	Newspaper *getNewspaper();
};


// SUBSCRIBERS

class Predator : public Observer {
public:
	Predator(Newspaper *news) : Observer(news) {}
	void update();
};

class Alien : public Observer {
public:
	Alien(Newspaper *news) : Observer(news) {}
	void update();
};


#endif
