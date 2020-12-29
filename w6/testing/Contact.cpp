/*
Name: Vu Pham
StudentID: 129908174
Lab: 06
In lab
Section: AB
*/
#ifndef SICT_CONTACT
#define SICT_CONTACT
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Contact.h"
using namespace std;
namespace sict {
	Contact::Contact() {
		
		name[0] = '\0';
		number = nullptr;
		numofphone = 0;


	}
	Contact::Contact(const char nam[], long long* num, int numofphone1) {
		int i = 0;
		int j = 0;
		int z = 0;
		if (nam != nullptr) {
			
			if (isEmpty()==true) {
				numofphone = numofphone1;
				strncpy_s(name, nam, 20-1);
				

			if (numofphone > 0) {
				number = new long long[numofphone];				
				for ( i = 0; i < numofphone; i++) {
					
					number[i] = num[i];
				}
				
				} else {
				number = nullptr;
				}


			} else {
				for ( j = 0; j < 21; j++) {
					name[j] = '\0';
				}
				number = nullptr;
				numofphone = 0;
			}


		} else {
			for ( z = 0; z < 21; z++) {
				name[z] = '\0';

			}
			
			number = nullptr;
			numofphone = 0;
		
		
		}


	}

	Contact::~Contact() {
		
		delete [] number;
		number = nullptr;

	}

	bool Contact::isEmpty() const {
		if (name[0] != '\0') {
			return false;
		}
		else if (name[0] != '\0' && number != nullptr && numofphone != 0) {
			return false;
		}
		
		else return true;


	}

	

	void Contact::display() const {
		int i = 0;
		

		if (isEmpty()==true) {
			cout << "Empty contact!" << endl;

		} else {
			
			cout << name << endl;
		
			for (i = 0; i < numofphone; i++) {
				int countryco;
				int areaco;
				long long phonenumber = number[i];
				long long counter2;
				int fournum;
				int dividenum = 10000000;
				int checknum;
				int counter1;
				int threenum;
				checknum= (phonenumber / dividenum);
				
				if ( checknum > 1001 && checknum < 99999) {
					areaco = checknum % 1000;
					countryco = checknum / 1000;

					counter2 = phonenumber % 1000000;
					fournum = counter2 % 10000;

					 counter1 = phonenumber / 10000;
					 threenum = counter1 % 1000;
					
					/*if(fournum=2){
					fournum = 0002;
					}
					*/
					
					 cout << "(+" << countryco << ") " << areaco << " " << threenum << "-" << setfill('0') << std::setw(4) << fournum << endl;
				
				}
			}

		}




	}

	Contact::Contact(const Contact& src) {
		numofphone = src.numofphone;
		strncpy_s(name, src.name, 21);

		if (src.number != nullptr) {
			number = new long long[numofphone];
			for (int i = 0; i < numofphone; i++) {
				number[i] = src.number[i];
			}
		}
		else {
			number = nullptr;
		}
	}

	Contact& Contact::operator=(const Contact& source) {
		if (this != &source) {
			numofphone = source.numofphone;
			strncpy_s(name, source.name, 21);
			delete[] number;

			if (source.number != nullptr) {
				number = new long long[numofphone];
				for (int i = 0; i < numofphone; i++) {
					number[i] = source.number[i];

				}
			}
			else {
				number = nullptr;
			}
		}
		return *this;
	}

	Contact& Contact::operator+=(const long long phoneNumber) {
		
		long long *newphone;
		newphone = new long long[numofphone + 1];

		for (int i = 0; i < numofphone; i++) {
			newphone[i] = number[i];
			
		}
		
		numofphone++;

		if (number != nullptr) {
			
			delete [] number;
			number = nullptr;

		}

		number = new long long[numofphone];
		
		
		for (int j = 0; j < numofphone; j++) {
			number[j] = newphone[j];
		}
		
		number[numofphone - 1] = phoneNumber;

		delete[] newphone;
		newphone = nullptr;
		
		
		
		return *this;
	}


}
#endif