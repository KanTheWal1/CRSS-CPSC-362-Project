#include <iostream>
#include <fstream>
#include "vehicle.h"
using namespace std;

Vehicle:: Vehicle()
{

}

int Vehicle::vCount()
{
    int counter = 0;
    ifstream retreive("vehicleData.txt");

    string lines;
    while(getline(retreive,lines))
    {
        if(!lines.empty())
        {
            counter++;
        }
    }

    retreive.close();

    cout<<counter;
    return counter;
    
}