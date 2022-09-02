//#pragma once
#ifndef CRSS_H
#define CRSS_H
#include <iostream>
#include <string>
using namespace std;



class Vehicle
{
private:
	string cType;
	string cMake;
	string cModel;
	float cMPG;
	bool cNav;

public:
	Vehicle();// constructor 
	Vehicle(string cType, string cMake, string cModel); // overloaded constructor
	~Vehicle(); // destructor



};
#endif