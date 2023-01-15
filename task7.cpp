#include <iostream>
using namespace std;
float checkcost(string city,string product,int quantity);
main ()
{
    string city;
    string product;
    int quantity;
    float cost;
    cout << "enter product :";
    cin >> product;
    cout << "enter city :";
    cin >> city ;
    cout << "enter quantity :";
    cin >> quantity;
    cost=checkcost(city,product,quantity);
    cout << "Cost will be :"<< cost << endl;


}

  float checkcost(string city,string product,int quantity)
   {
       float cost;
      
      
      if (product=="coffee" && city=="sofia")
       {
        cost=(quantity*0.50);
       
       }

       
      else if (product=="coffee" && city=="plovid")
       {
        cost=(quantity*0.40);
        
       }

      
     else if (product=="coffee" && city=="varna")
       {
        cost=(quantity*0.45);
      
       }

       
     else if (product=="water" && city=="sofia")
       {
        cost=quantity*0.80;
       
       }

      
     else  if (product=="water" && city=="plovid")
       {
        cost=quantity*0.70;
       
       }
       
       
      else if (product=="water" && city=="varna")
       {
        cost=quantity*0.70;
        
       }

      
     else if (product=="beer" && city=="sofia")
       {
        cost=quantity*1.20;
        
       }

      
      else if (product=="beer" && city=="plovid")
       {
        cost=quantity*1.15;
        
       }

       
      else if (product=="beer" && city=="varna")
       {
        cost=quantity*1.10;
        
       }

     else if (product=="sweets" && city=="sofia")
       {
        cost=quantity*1.45;
       
       }

      
      else if (product=="sweets" && city=="plovid")
       {
        cost=quantity*1.30;
        
       }

   
     else  if (product=="sweets" && city=="varna")
       {
        cost=quantity*1.35;
       
       }

       
      else if (product=="peanuts" && city=="sofia")
       {
        cost=quantity*1.60;
       
       }

      else if (product=="peanuts" && city =="plovid")
       {
        cost=quantity*1.50;
       
       }

      
     else if (product=="peanuts" && city=="varna")
       {
        cost=quantity*1.55;
      
       }

      return cost ;
   }