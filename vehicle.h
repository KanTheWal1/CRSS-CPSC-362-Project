//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;



class Vehicle
{

protected: // b/c we want to be able to access and view these details outside the class. [inheritance]
	string vType;
	string vSize;
	string vMake;
	string vModel;
	string plateNumber;
	string color;
	float vMPG;
	int seatingCapacity;
	bool vNav;


public:
	/*int vehicleCount;
	char pickUpLocation[20];
	char dropOffLocation[20];
	int pickUpDate;
	int dropOffDate;
	int pickUpTime;
	int dropOffTime;
	float pricePerDay;
	float pricePerWeek;
	float couponCode;*/

	Vehicle();// constructor 
	Vehicle(string vType, string vSize, string vMake, string vModel, string plateNumber, string color, float vMPG, int seatingCapacity, bool vNav); // overloaded constructor
	~Vehicle(); // destructor
	int vCount();
	//void pickUpInfo();


};
#endif