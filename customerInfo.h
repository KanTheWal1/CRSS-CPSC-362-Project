#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H
#include <iostream>
#include <string>
using namespace std;
//#include "vehicle.h"

class Customer
{
protected:
	string customerFName;
	string customerLName;
	int customerAge;
	string driversLicenseNumber;
	string streetAddress;
	string apartmentNumber;
	string cityOfResidence;
	string stateOfResidence;
	string zipCode;

public:
	Customer();
	~Customer();
	Customer(string customerFName, string customerLName, int customerAge, string driversLicenseNumber, string streetAddress, string apartmentNumber, string cityOfResidence, string stateOfResidence, string zipCode);
	int custAge(int customerAge);
	string cFName();
	string cLName();
	string DLNum();
	string stAddres();
	string aptNumber();
	string cResidence();
	string stateResidence();
	string zCode();




};
#endif