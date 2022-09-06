//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H



class Vehicle
{
	/*
protected: // b/c we want to be able to access and view these details outside the class. [inheritance]
	char vType[10];
	char vSize[10];
	char vMake[20];
	char vModel[10];
	char plateNummber[7];
	char color[10];
	float vMPG;
	int seatingCapacity;
	bool vNav;*/

	/*char pickUpLocation[20];
	char dropOffLocation[20];
	int pickUpDate;
	int dropOffDate;
	int pickUpTime;
	int dropOffTime;
	float pricePerDay;
	float pricePerWeek;
	float couponCode;
	*/
public:
	//Vehicle(char vType, char vSize, char vMake, char vModel, char vCapactiy); // overloaded constructor
	//~Vehicle(); // destructor
	Vehicle();//constructor
	int vCount();



};
#endif