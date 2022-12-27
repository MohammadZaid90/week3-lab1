#include<iostream>
using namespace std;

void add(int num1,int num2);
void multiply(int number1,int number2);
void subtraction(int n1,int n2);
void division(int nm1,int nm2);

int main()
{
 char a;
 int firstNum,secondNum;
 cout<<"Enter the first number: ";
 cin>>firstNum;
 
 cout<<"Enter the second number: ";
 cin>>secondNum;

 cout<<"Which operation you want (+,-,/,*): ";
 cin>>a;
 
if(a == '+')
{
  add(firstNum,secondNum);
}

if(a == '*')
{
  multiply(firstNum,secondNum);
}

if(a == '-')
{
  subtraction(firstNum,secondNum);
}

if(a == '/')
{
  division(firstNum,secondNum);
}

return 0;
}

void add(int num1,int num2)
{
  int sum;
  sum = num1+num2;
  cout<<"The sum of 2 numbers are: "<<sum<<endl;
}

void multiply(int number1,int number2)
{
  int mul;
  mul = number1+number2;
  cout<<"The multiplication of 2 numbers are: "<<mul<<endl;
}

void subtraction(int n1,int n2)
{
 int sub = n1-n2;
 cout<<"The subtraction of 2 numbers are: "<<sub<<endl;
}

void division(int nm1,int nm2)
{
 int div = nm1/nm2;
 cout<<"The division of 2 numbers are: "<<div<<endl;
}