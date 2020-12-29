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
// Name   Vu Pham  Date  03-25-2018  Reason
//
///////////////////////////////////////////////////////////
***********************************************************/


// TODO: include the necessary headers
#include <iostream>
using namespace std;
#include "kingdom.h"
// TODO: the sict namespace

// TODO:definition for display(...) 
namespace sict {
	void display(const Kingdom& pKingdom) {
		cout << pKingdom.m_name << ", population " << pKingdom.m_population << endl;

	}

	void display(const Kingdom pKingdom[], int count) {
		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;
		int i = 0;

		for (i = 0; i < count; i++) {
			count += pKingdom[i].m_population;
			cout << i + 1 << ". " << pKingdom[i].m_name << ", population " << pKingdom[i].m_population << endl;
		}
		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " <<  count <<endl;
		cout << "------------------------------" << endl;

	}
}