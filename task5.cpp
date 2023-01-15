#include <iostream>
using namespace std;
float totalincome(string screen,int rows,int columns);
main ()
{
  string screen;
  int rows,columns;
  float price;
  cout << "enter screen :";
  cin >> screen;
  cout << "enter rows :";
  cin >> rows;
  cout << "enter columns :";
  cin >> columns;
  price=totalincome(screen, rows,columns);
  cout << "total income will be :"<< price << endl;
  

}

  float totalincome(string screen,int rows,int columns)
   {
    float price ;
    if (screen=="premier")
      {
        price=rows*columns*12.00;
        return price;
      }

      if (screen=="normal")
      {
        price=rows*columns*7.50;
        return price;
      }

      if (screen=="discount")
      {
        price=rows*columns*5.00;
        return price;
      }
      return 0;
   }