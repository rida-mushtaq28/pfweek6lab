#include <iostream>
using namespace std;
int isgreatest(int n1,int n2,int n3);
main ()
{
    int greatest;
    int n1,n2,n3;
    cout << "enter num1:";
    cin >> n1;
    cout << "enter num2:";
    cin >> n2;
    cout << "enter num3:";
    cin >> n3;
    greatest= isgreatest(n1,n2,n3);
    cout << "greatest no is "<< greatest<< endl;
}

int isgreatest(int n1,int n2,int n3)
  {
    
    int greatest;
    if (n1>n2 && n1>n3)
     {
        greatest=n1;
        return greatest;
       
     }

     else if (n2>n1 && n2>n3)
     {
        greatest=n2;
        return greatest;
     }

     else if (n3>n2 && n3>n1)
     {
        
        greatest=n3;
        return greatest;
     }

     else 
     {
        greatest=n1;
     }
   return greatest;

  }