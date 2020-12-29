#ifndef SICT_CRA_ACCOUNT
#define SICT_CRA_ACCOUNT
#include <iostream>
#include <cstring>
#include <cmath>
#include "CRA_Account.h"
using namespace std;
namespace sict
{
	void CRA_Account::set(const char* familyName, const char* givenName, int sin)
	{
		if (isValidSIN(sin) && familyName != '\0' && givenName != '\0')
		{
			strncpy_s(familyname1, familyName, 42-1);
			strncpy_s(givenname1, givenName, 42-1);
			sinnum = sin;
			numofyear = 0;
		}
		else
		{
			familyname1[0] = '\0';
			givenname1[0] = '\0';
			sinnum = 0;
		}
	}

	void CRA_Account::set(int year, double balance)
	{
		if (sinnum != 0  && numofyear < max_yrs)
		{
			if (taxreturn[numofyear] == 0)
			{
				taxreturn[numofyear] = year;
				balan[numofyear] = balance;
				numofyear++;
			}
		}
	}

	bool CRA_Account::isValidSIN(int sin)
	{
		int total = 0;
		int checknum1[4] = { (((sin / 10) % 10) * 2), (((sin / 1000) % 10) * 2), (((sin / 100000) % 10) * 2), (((sin / 10000000) % 10) * 2) };
		int checknum2[4] = { (((sin / 100) % 10)), (((sin / 10000) % 10)), (((sin / 1000000) % 10)), (((sin / 100000000) % 10)) };

		for (int i = 0; i < max_yrs; i++)
		{
			total = total + ((((checknum1[i] / 1) % 10) + ((checknum1[i] / 10) % 10)));
			total = total + checknum2[i];
		}

		int cal = 0;
		cal = ((total + 9) / 10) * 10;
		int legit = 0;
		legit = cal - total;
		if ((legit == (sin / 1) % 10) && sin >= min_sin && sin <= max_sin)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void CRA_Account::display() const
	{
		if (sinnum != 0 || familyname1 != '\0' || givenname1 != '\0')
		{
			cout << "Family Name: " << familyname1 << endl;
			cout << "Given Name : " << givenname1 << endl;
			cout << "CRA Account: " << sinnum << endl;
			cout.setf(std::ios::fixed);
			cout.precision(2);


			for (int i = 0; i < max_yrs; i++)
			{
				if (taxreturn[i] == 0)  
					break;
				else
				{
					cout << "Year (" << taxreturn[i] << ")";
					if (balan[i] > 2)
					{
						cout << " balance owing: " << balan[i] << endl;  
					}
					else if (balan[i] < -2)
					{
						cout << " refund due: " << abs(balan[i]) << endl;  
					}
					else
					{
						cout << " No balance owing or refund due! " << endl;
					}
				}
			}
			cout.unsetf(std::ios::fixed);
			cout.precision(6);

		}
		else
		{
			cout << "Account object is empty!" << endl << endl;
		}
	}

	bool CRA_Account::isEmpty()
	{
		
		if (sinnum == 0 || sinnum <= min_sin || sinnum >= max_sin || givenname1[0] == '\0' || familyname1[0] == '\0')
		{  
			return true;
		}
		else
		{
			return false;
		}
	}
	
	CRA_Account::CRA_Account()
	{
		for (size_t x = 0; x < max_yrs; x++) taxreturn[x] = 0;
		for (size_t x = 0; x < max_yrs; x++) balan[x] = 0.0;
		
		familyname1[0] = '\0';
		givenname1[0] = '\0';
		sinnum = 0;
		numofyear = 0;
		
		
	}
	
};
#endif