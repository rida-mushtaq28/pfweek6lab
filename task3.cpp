#include <iostream>
using namespace std;
string checktitle(int age,char gender);
main ()
{
int age;
char gender;
string title;

  cout << "enter age :";
  cin >> age;
  cout << "enter gender :";
  cin >> gender;
  title=checktitle(age, gender);
  cout << "title :"<< title << endl;

}
 string checktitle(int age,char gender)
  {
    string title;
    if(age>=16 && gender=='m')
      {
        title="Mr.-a man";
        return title;
      }

      if(age<16 && gender=='m')
      {
        title="Master - a boy";
        return title;
      }

      if(age>=16 && gender=='f')
      {
        title="Ms. - a woman";
        return title;
      }

       if(age<16 && gender=='f')
      {
        title="miss - a girl";
        return title;
      }

      return 0;
    
  }