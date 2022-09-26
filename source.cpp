/*==================================================================
* Ali Tahami, Kanwaljeet Ahluwalia
* Professor M. Peiravi
* CPSC 362 - Software Engineering
* DATE:
* ------------------------------------------------------------------
* Description: CRSS v1.0:
* CRSS is a care rental software service.
==================================================================*/
#include "vehicle.h"
#include "customerInfo.h"
 
int main()
{
  int customerAge = 0;
  string customerFName = "";
  int count = 0;
  string vInventory = "";
 
  Vehicle v;
  //count = v.vCount();
  //v.disVehicle();
 
  //v.addInventory();
  v.displayVehicle();
 // v.pickUpInfo();
  //v.deleteVehicle();
/*
  Customer c;
  customerAge = c.custAge(customerAge);
  customerFName = c.cFName();
  c.cLName();
  c.DLNum();
  c.stAddres();
  c.aptNumber();
  c.cResidence();
  c.stateResidence();
  c.zCode();
  */
  // cout << endl << endl << customerAge << endl;
  // cout << endl << endl << customerFName << endl;
 
   system("pause");
   return 0;
 
}
