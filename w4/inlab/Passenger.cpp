#ifndef SICT_PASSENGER
#define SICT_PASSENGER
#include <iostream>
#include <cstring>
#include "Passenger.h"
using namespace std;
namespace sict {
	Passenger::Passenger() {
		name[0] = '\0';
		desti[0] = '\0';
	}
	Passenger::Passenger(const char name1[], const char destination[]) {
		if (nullptr == name1  || nullptr == destination || destination[0] == '\0' || name1[0] == '\0') {
			name[0] = '\0';
			desti[0] = '\0';
		}
		else {
			strncpy_s(name, name1, 33 - 1);
			strncpy_s(desti, destination, 33 - 1);
		}
	}
	bool Passenger::isEmpty() const {
		if (name[0] == '\0' && desti[0] == '\0') {
			return true;
		}
		else {
			return false;
		}
	}
	void Passenger::display() const {
		//cout << name << desti << endl;
		if (!isEmpty()) {
			cout << name << " - " << desti << endl;
		}
		else {
			cout << "No passenger!" << endl;
		}
	}
}
#endif