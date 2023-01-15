#include <iostream>
using namespace std;

main ()
{
    int price;
    string brand;
    cout << "enter price:";
    cin >> price;
    cout << "enter brand:";
    cin >> brand;
    if (price<=1500)
      {
        if (brand=="outfitter")
          {
        cout << "BUY!!!!!!"<< endl;
          }
        else
        {
           cout << "different brand!!";
        }
      }    
    else
      {
        cout << "NOT BUY!!!"<< endl;
      }
}   