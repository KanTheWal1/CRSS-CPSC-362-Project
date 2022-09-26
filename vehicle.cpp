#include "vehicle.h"
// Create an object array or vectors
 
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
 
   cout << "Vehicle count is: " << count << endl << endl;
 
 
   infile.close();
   return count;
}
void Vehicle::displayVehicle() // disVehicle(string &vType, string &vSize, string &vMake, string &vModel, string &plateNumber, string &color, float &vMPG, int &seatingCapacity, bool &vNav)
{
   ifstream infile;
   string line;
   istringstream iss;
 
 
   infile.open("vehicleData.txt");
 
 
   if (infile.is_open())
   {
       while (!infile.eof()) // using the input string stream variable iss, we input each word into iss.
       {
          
           getline(infile, line); // during the while loop, we're using getline to input the entire 1st line into "line" variable.
 
 
               iss.clear(); // clearing out state
               iss.str(line);
              
                                      
                   iss >> vType >> vSize >> vMake >> vModel >> plateNumber >> color >> vMPG >> seatingCapacity >> vNav;
                   cout << "Vehicle Type is: " << vType << endl
                       << "Vehicle Size is: " << vSize << endl
                       << "Vehicle Make is: " << vMake << endl
                       << "Vehicle Model is: " << vModel << endl
                       << "Vehicle License Plate Number is: " << plateNumber << endl
                       << "Vehicle Color is: " << color << endl
                       << "Vehicle MPGs are: " << vMPG << endl
                       << "Vehicle Seating Capacity is: " << seatingCapacity << endl
                       << "Does Vehicle have a Navigation systems: " << vNav << endl << endl;
 
       }
   }
   else
       cout << "Error, file isn't opening. " << endl;
 
   infile.close();
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
 
void Vehicle::deleteVehicle()
{
   vector<string> dVehicle;
   ifstream inFile;
   ofstream outFile;
   string line;
   istringstream iss;
   int count = 0;
   string search;
   char choice = 'Y';
   int lineNum = 0;
 
   inFile.open("vehicleData.txt");
  
   cout << "Would you like to delete a Vehicle(s) from the inventory? (Y or N): ";
   cin >> choice;
   /*
   while (toupper(choice == 'y'))
   {
       displayVehicle();
       break;
   }
   //cout << endl << "hi!\n\n";
   */
 
  
 
   if (inFile.is_open())
   {
       cout << "Which line number do you want to delete? " << endl;
       cin >> lineNum;
       cin.ignore();
 
       while(getline(inFile, line))
       {
           dVehicle.push_back(line);
       }  
   }
   inFile.close();
 
   outFile.open("vehicleData.txt");
  
   while (outFile.is_open())
   {
       lineNum--;
       for (int i = 0; i < dVehicle.size(); i++)
       {
           if (i!= lineNum)
               outFile << dVehicle[i] << endl;
       }
       break;
   }
 
   outFile.close();
   return;
}
