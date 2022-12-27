#include<iostream>
using namespace std;

void isEven(int number);

int main()
{
  int number;
  
while(true)
 {
  cout<<"Enter the number: ";
  cin>>number;
  
  isEven(number);
 }

}

void isEven(int number)
{

if(number%2 == 0)
  {
    cout<<"The number is even "<<endl;
  }
if(number%2 != 0)
  {
    cout<<"The number is odd "<<endl;
  }
}