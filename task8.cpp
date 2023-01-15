#include <iostream>
using namespace std;
float statement(int budget,string category,int persons);
main ()
 {
    int budget,persons;
    string category;
    cout << "enter shared budget :";
    cin >> budget;
    cout << "enter ticket category:";
    cin >> category;
    cout << "enter persons :";
    cin >> persons;
    statement(budget,category,persons);

 }

   float statement(int budget,string category,int persons)
     {
        float N,M; 
        if (persons<=4)
         {
           
           if (category=="vip")
                { 
                    float leftamount=(budget-(75*budget)/100);
                    N=leftamount-(persons*499.99);
                   
                    
                   if (N<=leftamount)
                      {
                      cout << "yes!you have"<< N << " leva left ." << endl;
                      }

                  else if (N>leftamount)
                    {  
                      M=(persons*499.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                    }  

                }

            else if (category=="normal")
                { 
                    float leftamount=(budget-(75*budget)/100);
                    N=leftamount-(persons*249.99);
                  
                  if (N<=leftamount)
                     {
                      cout << "yes!you have "<< N << " leva left ." << endl;
                     } 

                  else if (N>leftamount)
                     {
                      M=(persons*249.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                     }  

                }    
                
         }        
          

          if (persons>=5 && persons<=9)
         {
           
           if (category=="vip")
                { 
                    float leftamount=(budget-(60*budget)/100);
                    N=leftamount-(persons*499.99);
                   
                    
                   if (N<=leftamount)
                      {
                      cout << "yes!you have"<< N << " leva left ." << endl;
                      }

                  else if (N>leftamount)
                    {  
                      M=(persons*499.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                    }  

                }

            else if (category=="normal")
                { 
                    float leftamount=(budget-(60*budget)/100);
                    N=leftamount-(persons*249.99);
                  
                  if (N<=leftamount)
                     {
                      cout << "yes!you have "<< N << " leva left ." << endl;
                     } 

                  else if (N>leftamount)
                     {
                      M=(persons*249.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                     }  

                }    
                
         }

         

          if (persons>=10 && persons<=24)
         {
           
           if (category=="vip")
                { 
                    float leftamount=(budget-(50*budget)/100);
                    N=leftamount-(persons*499.99);
                   
                    
                   if (N<=leftamount)
                      {
                      cout << "yes!you have"<< N << " leva left ." << endl;
                      }

                  else if (N>leftamount)
                    {  
                      M=(persons*499.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                    }  

                }

            else if (category=="normal")
                { 
                    float leftamount=(budget-(50*budget)/100);
                    N=leftamount-(persons*249.99);
                  
                  if (N<=leftamount)
                     {
                      cout << "yes!you have "<< N << " leva left ." << endl;
                     } 

                  else if (N>leftamount)
                     {
                      M=(persons*249.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                     }  

                }    
                
         }  

        if (persons>=25 && persons<=49)
         {
           
           if (category=="vip")
                { 
                    float leftamount=(budget-(40*budget)/100);
                    N=leftamount-(persons*499.99);
                   
                    
                   if (N>=leftamount)
                      {
                      cout << "yes!you have"<< N << " leva left ." << endl;
                      }

                  else if (N<leftamount)
                    {  
                      M=(persons*499.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                    }  

                }

            else if (category=="normal")
                { 
                    float leftamount=(budget-(40*budget)/100);
                    N=leftamount-(persons*249.99);
                  
                  if (N<=leftamount)
                     {
                      cout << "yes!you have "<< N << " leva left ." << endl;
                     } 

                  else if (N>leftamount)
                     {
                      M=(persons*249.99)-leftamount;
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                     }  

                }    
                
         }

         if (persons>=50 )
         {
           
           if (category=="vip")
                { 
                    float leftamount=(budget-(25*budget)/100);
                    N=leftamount-(persons*499.99);
                   
                    
                   if (N>=leftamount)
                      {
                      cout << "yes!you have"<< N << " leva left ." << endl;
                      }

                  else if (N<leftamount)
                    {  
                      M=(persons*499.99)-leftamount;
                      
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                    }  

                }

            else if (category=="normal")
                { 
                    float leftamount=(budget-(25*budget)/100);
                    N=leftamount-(persons*249.99);
                  
                  if (N<=leftamount)
                     {
                      cout << "yes!you have "<< N << " leva left ." << endl;
                     } 

                  else if (N>leftamount)
                     {
                      M=(persons*249.99)-leftamount;
                     
                    cout << "not enough money! you need "<< M << " leva. " << endl;
                     }  

                }    
                
         }
               
              
               
         

                

     }
    