#include<iostream>
using namespace std;

void add(int num1,int num2);

int main()
{
 int firstNum,secondNum;
 cout<<"Enter the first number: ";
 cin>>firstNum;
 
 cout<<"Enter the second number: ";
 cin>>secondNum;
 
  add(firstNum,secondNum);
}

void add(int num1,int num2)
{
  int sum;
  sum = num1+num2;
  cout<<"The sum of 2 numbers are: "<<sum<<endl;
}