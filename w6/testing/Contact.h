/*
Name: Vu Pham
StudentID: 129908174
Lab: 06
In lab
Section: AB
*/
#ifndef CONTACT_H_
#define CONTACT_H_

namespace sict {
	class Contact {
		char name[20];
		long long* number;
		int numofphone;

	public:
		Contact();
		Contact(const char Name[], long long* PhoneNum, int Num_of_Phone);
		~Contact();
		bool isEmpty() const;
		void display() const;
		Contact(const Contact&);
		Contact& operator+=(const long long num);
		Contact& operator=(const Contact&);
	};




}
#endif
