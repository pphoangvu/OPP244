/*
Name: Vu Pham
StudentID: 129908174
Lab: 07
In lab
Section: AB
*/
#ifndef HERO_H_
#define HERO_H_
#include <cstring>
#include <iostream>
using namespace std;

namespace sict {
	class Hero {
		char name[40];
		int health;
		int strength;

	public:
		Hero();
		Hero(const char name[], int health, int strenght);
		void operator-=(int attack);
		bool isAlive() const;
		int attackStrength() const;
		friend ostream& operator<<(std::ostream& os, const Hero& hero);



	};

	
	const Hero& operator*(const Hero& first, const Hero& second);
}
#endif
