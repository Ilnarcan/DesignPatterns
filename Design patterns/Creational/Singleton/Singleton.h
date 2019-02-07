
#ifndef _Singleton_H_
#define _Singleton_H_

#include <iostream>
#include <string>

void Singleton();

class Settings {
private:
	static Settings *Set;
	Settings() {};
	Settings(const Settings &);
	Settings & operator=(Settings &);
public:
	static Settings * getInstance();
	void ViewLog();
};


#endif // !_Singleton_H_