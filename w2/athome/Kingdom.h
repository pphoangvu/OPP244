
/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date ???????????
// Author ?????????
// Description
// ?????????????????????
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name   Vu Pham  Date  05-29-2018  Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H

// TODO: sict namespace
namespace sict {
	struct Kingdom {
		char m_name[32];
		int m_population;
	};
	void display(const Kingdom & pKingdom);
	void display(const Kingdom kingdoms[], int count);

}
#endif
// TODO: define the structure Kingdom in the sict namespace

// TODO: declare the function display(...),
//         also in the sict namespace




