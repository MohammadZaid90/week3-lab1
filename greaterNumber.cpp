#include<iostream>
using namespace std;

void isGreater(int num1,int num2);

int main()
{

int num1,num2;

while(1)
{
cout<<"Enter the number 1: ";
cin>>num1;

cout<<"Enter the number 2: ";
cin>>num2;


isGreater(num1,num2);
}

}

void isGreater(int num1,int num2)
{

if(num1 > num2)
{
cout<<num1<<" is greater than "<<num2<<endl;
}

if(num2 > num1)
{
cout<<num2<<" is greater than "<<num1<<endl;
}

if(num2 == num1)
{
cout<<num2<<" is equal to "<<num1<<endl;
}

}
