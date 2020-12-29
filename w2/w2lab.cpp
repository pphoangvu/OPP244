/***********************************************************
// Workshop 2: Dynamic Memory
// File w2_in_lab.cpp
// Version 2.0
// Date ???????????
// Author ?????????
// Description
// ?????????????????????
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name   Vu Pham  Date   03-25-2018 Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

#include <iostream>
#include "kingdom.h"

using namespace std;
using namespace sict;

void read(sict::Kingdom&);

int main() {
	int count = 0; // the number of kingdoms in the array

				   // TODO: declare the pKingdom pointer here (don't forget to initialize it)
	Kingdom *pKingdom = nullptr;
	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Enter the number of Kingdoms: ";
	cin >> count;
	cin.ignore();

	if (count < 1) return 1;

	// TODO: allocate dynamic memory here for the pKingdom pointer
	pKingdom = new Kingdom[count];

	for (int i = 0; i < count; ++i) {
		cout << "Kingdom #" << i + 1 << ": " << endl;
		// TODO: add code to accept user input for Kingdom i
		read(pKingdom[i]);
	}
	cout << "==========" << endl << endl;

	// testing that "display(...)" works
	cout << "------------------------------" << endl
		<< "The 1st kingdom entered is" << endl
		<< "------------------------------" << endl;
	sict::display(pKingdom[0]);
	cout << "------------------------------" << endl << endl;

	// TODO: deallocate the dynamic memory here
	delete[] pKingdom;
	pKingdom = nullptr;
	return 0;
}

// read accepts data for a Kingdom from standard input
//
void read(sict::Kingdom& pKingdom) {

	cout << "Enter the name of the Kingdom: ";
	cin.get(pKingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << pKingdom.m_name << ": ";
	cin >> pKingdom.m_population;
	cin.ignore(2000, '\n');
}
