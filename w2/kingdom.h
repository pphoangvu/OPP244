#pragma once
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
// Name     Date    Reason
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
	void display(const Kingdom & kingdom);
	void display(const Kingdom kingdom[], int count);

}
#endif
// TODO: define the structure Kingdom in the sict namespace

// TODO: declare the function display(...),
//         also in the sict namespace



