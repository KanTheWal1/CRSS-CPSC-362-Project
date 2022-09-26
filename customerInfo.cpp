#include "customerInfo.h"
 
Customer::Customer()
{
   customerFName = "";
   customerLName= "";
   customerAge = 0;
   driversLicenseNumber = "";
   streetAddress = "";
   apartmentNumber = "";
   cityOfResidence = "";
   stateOfResidence = "";
   zipCode = "";
}
Customer::~Customer(){}
Customer::Customer(string customerFName, string customerLName, int customerAge, string driversLicenseNumber, string streetAddress, string apartmentNumber, string cityOfResidence, string stateOfResidence, string zipCode)
{
   this->customerFName = customerFName;
   this->customerLName = customerLName;
   this->customerAge = customerAge;
   this->driversLicenseNumber = driversLicenseNumber;
   this->streetAddress = streetAddress;
   this->apartmentNumber = apartmentNumber;
   this->cityOfResidence = cityOfResidence;
   this->stateOfResidence = stateOfResidence;
   this->zipCode = zipCode;
}
int Customer::custAge(int customerAge)
{
   cout << "\nPlease enter your current age: ";
   cin >> customerAge;
 
   //cout << endl << "Your current age is: " << customerAge << endl;
 
   return customerAge;
}
string Customer::cFName()
{
   cout << "Please enter your first name: ";
   cin.ignore();
   getline(cin, customerFName);
 
   // cout << endl << endl << customerFName << endl;
 
   return customerFName;
}
string Customer::cLName()
{
   cout << "Enter Last Name: ";
   getline(cin, customerLName);
   // cout << customerLName << endl;
 
   return customerLName;
}
string Customer::DLNum()
{
   cout << "Enter Driver's License Number: ";
   getline(cin, driversLicenseNumber);
   // cout << driversLicenseNumber << endl;
 
   return driversLicenseNumber;
}
string Customer::stAddres()
{
   cout << "Enter your Street Address: ";
   getline(cin, streetAddress);
   // cout << streetAddress << endl;
 
   return streetAddress;
}
string Customer::aptNumber()
{
   cout << "Enter Apartment Number: ";
   getline(cin, apartmentNumber);
   //if (apartmentNumber == NULL)
   // cout << apartmentNumber << endl;
 
   return apartmentNumber;
}
string Customer::cResidence()
{
   cout << "Enter City of Residence: ";
   getline(cin, cityOfResidence);
   // cout << cityOfResidence << endl;
 
   return cityOfResidence;
}
string Customer::stateResidence()
{
   cout << "Enter State of Residence: ";
   getline(cin, stateOfResidence);
   // cout << stateOfResidence << endl;
 
   return stateOfResidence;
}
string Customer::zCode()
{
 
   cout << "Enter Zip Code: ";
   getline(cin, zipCode);
   // cout << zipCode << endl;
 
   return zipCode;
}
