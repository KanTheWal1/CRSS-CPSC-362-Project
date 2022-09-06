//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;



class Vehicle
{
protected: // b/c we want to be able to access and view these details outside the class. [inheritance]
	char vType[10];
	char vSize[10];
	char vMake[20];
	char vModel[10];
	char pickUpLocation[20];
	char dropOffLocation[20];
	char color[10];
	int seatingCapacity;
	float vMPG;
	char plateNummber[7];
	bool vNav;
	int pickUpDate;
	int dropOffDate;
	int pickUpTime;
	int dropOffTime;
	float pricePerDay;
	float pricePerWeek;
	float couponCode;

public:
	Vehicle();// constructor 
	Vehicle(char vType, char vMake, char vModel); // overloaded constructor
	~Vehicle(); // destructor



};
#endif