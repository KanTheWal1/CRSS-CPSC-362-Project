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
#include<mysql.h>

int main()
{
     int qstate;
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);

    conn = mysql_real_connect(conn, "localhost", "root", "password", "crss", 3306, NULL, 0);

    if (conn)
    {
        cout << "Connection Successful" << endl;

        string query = "SELECT * FROM customers";
        // string query = "SELECT count(*) FROM customers";

        const char* q = query.c_str();

        qstate = mysql_query(conn, q);

        if (!qstate)
        {
            res = mysql_store_result(conn);

            while (row = mysql_fetch_row(res))
            {
                cout << "Drivers License Number: " << row[0] << "\t"
                    << "Customer First Name: " << row[1] << "\t"
                    << "Customer Last Name: " << row[2] << "\t"
                    << "Customer Age: " << row[3] << "\t"
                    << "City Of Residence: " << row[4] << "\t"

                    // Note: Ask professor about fixing this error.
                    << "Apartment Number:" << row[5] << "\t"
                    //

                    << "Street Address: " << row[6] << "\t"
                    << "State Of Residence" << row[7] << "\t"
                    << "Zip Code" << row[8] << endl;
               
                     /* row[1] << endl
                    << row[2] << endl
                    << row[3] << endl
                    << row[4] << endl
                    << row[5] << endl
                    << row[6] << endl
                    << row[7] << endl
                    << row[8] << endl;*/
            }
        }
    }

    else
        cout << "Connection Unsuccessful: " << endl;
        
  int customerAge = 0;
  string customerFName = "";
  int count = 0;
  string vInventory = "";
 
  Vehicle v;
  //v.vCount(); 
  //v.addInventory();
  //v.displayVehicle();
  //v.deleteVehicle();
  //v.pickUpInfo();
  //v.deleteVehicle();
/*
  Customer c;
  c.custAge(customerAge);
  c.cFName();
  c.cLName();
  c.DLNum();
  c.stAddres();
  c.aptNumber();
  c.cResidence();
  c.stateResidence();
  c.zCode();
  */
   system("pause");
   return 0;
 
}
