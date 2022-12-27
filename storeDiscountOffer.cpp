#include<iostream>
using namespace std;

void totalAmount(string day,int amount);

int main()
{
  string day;
  int amount;

while(true)
{
  cout<<"Enter the day: ";
  cin>>day;

  cout<<"Enter the ammount: ";
  cin>>amount;

  totalAmount(day,amount);
}

}

void totalAmount(string day,int amount)
{
  int value = amount-(amount*10/100);
  int number = amount-(amount*5/100);

if(day == "sunday")
{
cout<<"You have a bill of "<<value<<" PKR due to sunday sale 10% discount"<<endl;
}

if(day != "sunday")
{
cout<<"You have a bill of "<<number<<" PKR with 5% discount due to today is not sunday"<<endl;
}

}