#include <iostream>
using namespace std;
string checkspeed(float speed);
main ()
{
   float speed;
   string speedstatus;
   cout << "enter speed :";
   cin >> speed;
   speedstatus=checkspeed(speed);
   cout << "checkspeed"<<  speedstatus<< endl;


}
    
    string checkspeed(float speed)
    {
        string speedstatus;
        if (speed <=10)
         {
            speedstatus="SLOW";
            return speedstatus;
         } 

         if (speed >10 && speed<=50)
         {
            speedstatus="AVERAGE";
            return speedstatus;
         } 

         if (speed >50 && speed<=150)
         {
            speedstatus="FAST";
            return speedstatus;
         } 

         if (speed>150 && speed<=1000)
         {
            speedstatus="ULTRA FAST";
            return speedstatus;
         } 

         if (speed>1000)
         {
            speedstatus="EXTREMELY FAST";
            return speedstatus;
         } 
         return 0;
    }