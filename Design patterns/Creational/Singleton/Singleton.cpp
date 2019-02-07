
#include "Singleton.h"

Settings * Settings::Set = 0;

Settings * Settings::getInstance()
{
	if (Set == 0) {
		Set = new Settings();
	}

	return Set;
}
void Settings::ViewLog() {
	std::cout << "The system will be crash after: " << std::endl;
	std::cout << "3..." << std::endl;
	std::cout << "2..." << std::endl;
	std::cout << "1..." << std::endl;
}

void Singleton() {
	Settings::getInstance()->ViewLog();
}