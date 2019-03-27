
#include <iostream>
#include <algorithm>
#include <typeinfo>

#include "Observer.h"

// "INDEPENDENT" - "Subject" abstraction

Newspaper::Newspaper(std::string nameCompany) {
	name = nameCompany;
}
void Newspaper::add(Observer *obs) {
	views.push_back(obs);
}
void Newspaper::del(Observer *obs) {
	views.erase(std::remove(views.begin(), views.end(), obs), views.end());
}
void Newspaper::makeChanges(int change) {
	value = change;
	inform();
}
int Newspaper::getVal() {
	return value;
}
std::string Newspaper::getName() {
	return name;
}
void Newspaper::inform() {
	for (auto sub : views)
		sub->update();
}


// "DEPENDENT" - "Observers" abstraction

Observer::Observer(Newspaper *news) {

	model = news;

	model->add(this);
}

Newspaper * Observer::getNewspaper() {
	return model;
}


// SUBSCRIBERS

void Predator::update() {
	int v = getNewspaper()->getVal();
	std::cout << "Dear,  " << typeid(*this).name() << " ! Our company " << getNewspaper()->getName() << " send you a new newspaper N" << v << "!" << std::endl;
}

void Alien::update() {
	int v = getNewspaper()->getVal();
	std::cout << "Dear,  " << typeid(*this).name() << " ! Our company " << getNewspaper()->getName() << " send you a new newspaper N" << v << "!" << std::endl;
}

void ObserverGo() {

	Newspaper EarthNews("Earth news");

	Predator hum(&EarthNews);
	Alien al(&EarthNews);

	EarthNews.makeChanges(13);
	EarthNews.makeChanges(14);

	EarthNews.del(&al);

	EarthNews.makeChanges(15);

}