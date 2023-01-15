#include <iostream>
#include<cmath>
using namespace std;
float volleyball(string year,int holidays,int weekends);
main ()
{
    string year;
    int holidays;
    int weekends;
   
    cout << "Enter year i.e is normal or leap:";
    cin >> year;
    cout << "Enter number of holidays:";
    cin >> holidays;
    cout << "Enter number of weekends:";
    cin >> weekends;
     float timesplay=volleyball(year,holidays,weekends);
     cout << floor(timesplay)<< " times viladmir plays "<< endl;



}

float volleyball(string year,int holidays,int weekends)
 {
    float holidaysplay;
    float weekendsplay;
    float timesplay;

    holidaysplay=(2*holidays)/3;
    weekendsplay=(3*48)/4;
    timesplay=holidaysplay+weekendsplay;
    if(year=="leap")
     {
        timesplay=timesplay+((15*timesplay)/100);
        return timesplay;
     }
    else 
    {
       return timesplay;
    }
    return 0;
 }