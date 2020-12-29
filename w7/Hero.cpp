

#include <iostream>
#include <iostream>

#include <cstring>
#include "Hero.h"


using namespace std;

namespace sict {

	Hero::Hero() {
		name[0] = '\0';
		health = 0;
		strength = 0;
	}

	Hero::Hero(const char nam[], int hth, int str) {
		if (name != nullptr || name != "") {
			strncpy(name, nam, 40);

		}
		else {
			name[0] = '\0';
		}

		strength = str;
		health = hth;

	}










}