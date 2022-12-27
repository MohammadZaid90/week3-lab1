#include<iostream>
using namespace std;

void osEligible(int age);

int main()
{
  int umer;
  
while(1)
  {
   cout<<"Enter Your Age: ";
   cin>>umer;

   osEligible(umer);
  }
}


void osEligible(int age)
{
  if(age >= 18)
   {
     cout<<"you are Eligible for this vote! "<<endl;
   } 

  if(age < 18)
   {
     cout<<"you are not Eligible for this vote! "<<endl;
   }
}