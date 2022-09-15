//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
#include <map>
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
	string vMPG;
	string seatingCapacity;
	string vNav;


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
	Vehicle(string vType, string vSize, string vMake, string vModel, string plateNumber, string color, string vMPG, string seatingCapacity, string vNav); // overloaded constructor
	~Vehicle(); // destructor
	int vCount();
	//void pickUpInfo();
	void disVehicle();
	void addInventory();

};
#endif