#include "vehicle.h"

Vehicle::Vehicle() 
{
	vType = "";
	vSize = "";
	vMake = "";
	vModel = "";
	plateNumber = "";
	color = "";
	vMPG = 0.0;
	seatingCapacity = 0;
	vNav = NULL;

}// constructor 
Vehicle::Vehicle(string vType, string vSize, string vMake, string vModel, string plateNumber, string color, float vMPG, int seatingCapacity, bool vNav) // overloaded constructor
{
	this->vType = vType;
	this->vSize = vSize;
	this->vMake = vMake;
	this->vModel = vModel;
	this->plateNumber = plateNumber;
	this->color = color;
	this->vMPG = vMPG;
	this->seatingCapacity = seatingCapacity;
	this->vNav = vNav;

}
Vehicle::~Vehicle()
{
	// destructor
}
int Vehicle::vCount()
{
	int count = 0; 
	string lines = "";

	ifstream infile;

	infile.open("vehicleData.txt");

	while (getline(infile, lines))
	{
		if (!lines.empty())
		{
			count++;
		}
		else
			cout << "Sorry there are no vehicles available. " << endl;
	}

	cout << "Vehicle count is: " << count << endl;


	infile.close();
	return count;
}
/*void pickUpInfo()
{
	cout << 
}*/