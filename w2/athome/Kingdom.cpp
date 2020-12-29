/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date ???????????
// Author ?????????
// Description
// ?????????????????????
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name   Vu Pham  Date  03-29-2018  Reason
//
///////////////////////////////////////////////////////////
***********************************************************/


// TODO: include the necessary headers
#include <iostream>
#include "Kingdom.h"
using namespace std;

// TODO: the sict namespace

// TODO:definition for display(...) 
namespace sict {
	void display(const Kingdom& pKingdom) {
		cout << pKingdom.m_name << ", population " << pKingdom.m_population << endl;

	}

	void display(const Kingdom kingdoms[], int count) {
		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;
		int total = 0;
		for (int i = 0; i < count; i++) {
			/*cout << i + 1 << ". ";
			sict::display(kingdoms[i]);*/
			cout << i + 1 << ". " << kingdoms[i].m_name << ", population " << kingdoms[i].m_population << endl;
			total += kingdoms[i].m_population;
			
			
			
		}
		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " << total << endl;
		cout << "------------------------------" << endl;

	}
}