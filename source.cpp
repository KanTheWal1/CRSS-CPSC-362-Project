#include "vehicle.h"
#include "customerInfo.h"

int main()
{
   int customerAge = 0;
   string customerFName = "";
   int count = 0;

   Vehicle v;
   count = v.vCount();
  // v.pickUpInfo();

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

   // cout << endl << endl << customerAge << endl;
   // cout << endl << endl << customerFName << endl;

    system("pause");
    return 0;

}
/* ========================== Current Output =========================
Vehicle count is: 6

Please enter your current age: 35

Your current age is: 35
Please enter your first name: ken


ken
Enter Last Name: walia
walia
Enter Driver's License Number: d3445669
d3445669
Enter your Street Address: 2405 Agnes Cir
2405 Agnes Cir
Enter Apartment Number:

Enter City of Residence: Fullerton
Fullerton
Enter State of Residence: CA
CA
Enter Zip Code: 92835
92835
Press any key to continue . . .

*/