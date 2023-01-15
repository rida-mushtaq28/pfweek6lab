#include <iostream>
using namespace std;
float lowestprice(int km,string period);
main()
{  
    int km;
    string period; 
    float fare;
    cout << "enter kilometers :";
    cin >> km;
    cout << "enter period:";
    cin >> period;
    fare=lowestprice(km,period);
    cout << "lowest price will be:"<< fare<< endl;

}
float lowestprice(int km,string period)
  {
    float fare;
    
    if ((km>=20 && km<100 )&& ( period=="day" || period=="night"))
     {
         fare=km*0.09;
         return fare;
     }

    else if ((km>=100 && km <1000) &&( period== "day" || period=="night"))
     {
         fare=km*0.06;
         return fare;
     }

     else if (km<20 && period=="day")
       {
        fare=0.70+(km*0.79);
        return fare;
       }

      else  if (km<20 && period=="night")
       {
        fare=0.70+(km*0.90);
        return fare;
       }
       return 0;
  }
