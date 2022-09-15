#include "vehicle.h"

Vehicle::Vehicle() 
{
	vType = "";
	vSize = "";
	vMake = "";
	vModel = "";
	plateNumber = "";
	color = "";
	vMPG = "";
	seatingCapacity = "";
	vNav = "";

}// constructor 
Vehicle::Vehicle(string vType, string vSize, string vMake, string vModel, string plateNumber, string color, string vMPG, string seatingCapacity, string vNav) // overloaded constructor
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
void Vehicle::disVehicle() // disVehicle(string &vType, string &vSize, string &vMake, string &vModel, string &plateNumber, string &color, float &vMPG, int &seatingCapacity, bool &vNav)
{
	ifstream infile;
	string line;
	istringstream iss; 

	infile.open("vehicleData.txt");


	if (infile.is_open())
	{
		while (!infile.eof())
		{
			getline(infile, line); // during the while loop, we're using getline to input the entire 1st line into "line" variable.

			//cout << line << endl;

				iss.clear(); // clearing out state
				iss.str(line);
				while (iss.good()) // using the input string stream variable iss, we input each word into iss. 
				{
					iss >> vType >> vSize >> vMake >> vModel >> plateNumber >> color >> vMPG >> seatingCapacity >> vNav;
					cout << "Vehicle Type is: " << vType << endl
						<< "Vehicle Size is: " << vSize << endl
						<< "Vehicle Make is: " << vMake << endl
						<< "Vehicle Model is: " << vModel << endl
						<< "Vehicle License Plate Number is: " << plateNumber << endl
						<< "Vehicle Color is: " << color << endl
						<< "Vehicle MPGs are: " << vMPG << endl
						<< "Vehicle Seating Capacity is: " << seatingCapacity << endl
						<< "Does Vehicle have a Navigation systems " << vNav << endl;

					// system("pause");
				}
			
		}
	}
	else
		cout << "Error, file isn't opening. " << endl;

	infile.close();
	return;
}
void Vehicle::addInventory()
{
	string vType = " ";
	string vSize = " ";
	string vMake = " ";
	string vModel = " ";
	string plateNumber = " ";
	string color = " ";
	string vMPG = " ";
	string seatingCapacity = " ";
	string vNav = " ";

	char choice = 'y';
	char choice2 = 'n';
	//string line = " ";
	ofstream outFile;
	//ifstream inFile;
	istringstream iss;
	//ostringstream oss;


	outFile.open("vehicleData.txt", ios::out | ios::app);

	cout << "Would you like to add a new vehicle? (Y/N): ";
	cin.get(choice);
	cout << endl;

	if (toupper(choice == 'y'))
	{
			while (outFile.is_open())
			{
				//getline(oss, line);

				//oss.clear(); // clearing out state
				//oss.str(line);
				//while (oss.good()) // using the input string stream variable iss, we input each word into iss.
				
				cout << "Please enter Vehicle Type: ";
				cin.ignore();
				getline(cin, vType);
				outFile << vType << " ";
		
				cout << "\nPlease enter Vehicle Size: " ;
				getline(cin, vSize);
				outFile << vSize << " ";

				cout << "\nPlease enter Vehicle Make: ";
				getline(cin, vSize);
				outFile << vSize << " ";

				cout << "\nPlease enter Vehicle Model: ";
				getline(cin, vModel);
				outFile << vModel << " ";

				cout << "\nPlease enter Vehicle License Plate Number: ";
				getline(cin, plateNumber);
				outFile << plateNumber << " ";

				cout << "\nPlease enter Vehicle Color: ";
				getline(cin, color);
				outFile << color << " ";

				cout << "\nPlease enter Vehicle MPGs: ";
				getline(cin, vMPG);
				outFile << vMPG << " ";

				cout << "\nPlease enter Vehicle Seating Capacity: ";
				getline(cin, seatingCapacity);
				outFile << seatingCapacity << " ";

				cout << "\nPlease enter Vehicle Navigation system status (True or False): ";
				getline(cin, vNav);
				outFile << vNav << " \n";
				
				cout << "\n\nWould you like to add more vehicles? (Y/N): ";
				cin >> choice2;

				if (toupper(choice2 == 'n'))
				{
					return;
				}

			}	
	}
	else if (!outFile.is_open())
	{
		cout << "Error file has not opened. " << endl;
	}
	else
	{
		cout << "Okay, now redirecting. " << endl << endl;
	}
		outFile.close();
		//system("pause");
		return;
}
/*void pickUpInfo()
{
	cout << 
}*/
/* =============================== OUTPUT ==========================================

Vehicle count is: 6

Vehicle count is: Toyota Camry : XYZ123F White 32 5 ture

Vehicle count is: Mercedes S500 WGV456T Black 20 5 true

Vehicle count is: Honda CRV YRS789O Red 26 5 true

Vehicle count is: Mercedes G55 YSL655T Blue 16 5 true

Vehicle count is: Porsche Caymann JHL782V Yellow 2 true

Vehicle count is: Chevolet Camaro JKL239J Green false
Press any key to continue . . .

// ============================ vehicleData.txt info ================================
Sedan Mid-size Toyota Camry XYZ123F White 32 5 True
Sedan Large Mercedes S500 WGV456T Black 20 5 True
SUV Small Honda CRV YRS789O Red 26 5 True
SUV Large Mercedes G55 YSL655T Blue 16 5 False
Coupe Small Porsche Caymann JHL782V Yellow 2 True
Coupe Mid-sized Chevolet Camaro JKL239J Green False
=====================================================================================

*/

