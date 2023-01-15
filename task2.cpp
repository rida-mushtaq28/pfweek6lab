#include <iostream>
using namespace std;
float Payable(string day,string month ,int amount);
main ()
{
  int amount ,payable;
  string day,month;
  cout << "enter amount :";
  cin >> amount;
  cout << "enter day :";
  cin >> day;
  cout << "enter month :";
  cin >> month;
  payable=Payable(day,month ,amount);
  cout << "payable amount is "<< payable << endl;



}
  float Payable(string day,string month ,int amount)
    {
        int payable=amount;
        if (day == "sunday" && (month== "october" || month == "march" || month =="august" ))
           {
            
                payable =amount -(amount*10)/100;
                return payable;
             
           
          }     
        else if (day =="monday" && (month== "november" || month =="december"))
        {
            payable =amount -(amount*5)/100;
            return payable;
        } 

        else{
            return payable;
        }     
        
           
    }
 