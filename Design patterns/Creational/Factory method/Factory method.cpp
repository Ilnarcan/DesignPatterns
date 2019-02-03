
#include "Factory method.h"


void FactoryMethod() {

	RoadLogistics A;
	SeaLogistics B;
	Transport *tr = NULL;

	int choose = 0;

	std::cout << "If you want to create a new road machine press 1" << std::endl
		<< "If you want to create a new road machine press 2" << std::endl;

	while (choose < 1 || choose > 2)
		std::cin >> choose;

	if (choose == 1) {
		Logistics *log = &A;
		tr = log->createTransport();
	}
	else if (choose == 2) {
		Logistics *log = &B;
		tr = log->createTransport();
	}
	
	std::cout << tr->deliver() << std::endl;
	delete tr;

}
