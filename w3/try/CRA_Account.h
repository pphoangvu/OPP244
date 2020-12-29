#ifndef SICT_CRA_ACCOUNT_H
#define SICT_CRA_ACCOUNT_H

#include <iostream>
using namespace std;

namespace sict
{
	const int max_name_length = 40;
#define min_sin 100000000
#define max_sin 999999999
	const int max_yrs = 4;
	class CRA_Account
	{
		char familyname1[41];
		char givenname1[41];
		int sinnum=0;
		int taxreturn[max_yrs];
		double balan[max_yrs];
		int numofyear=0;
	public:
		CRA_Account();
		void set(const char* familyName, const char* givenName, int sin);
		void set(int year, double balance);
		void display() const;
		bool isEmpty();
		bool isValidSIN(int sin);
	};
}
#endif
