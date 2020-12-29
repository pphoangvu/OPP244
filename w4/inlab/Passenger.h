#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H

#include <iostream>
using namespace std;

namespace sict {

	class Passenger {
		char name[33];
		char desti[33];
	public:
		Passenger();
		Passenger(const char  name1[], const char destination[]);
		bool isEmpty() const;
		void display() const;
	};
}
#endif

