#include<iostream>
using namespace std;

void ifpass(int marks);

int main()
{
 int marks;
 cout<<"Enter marks: ";
 cin>>marks;

ifpass(marks);

}

void ifpass(int marks)
{
 
if(marks > 50)
{
cout<<"you have passed your first quiz of PF";
}

if(marks == 50)
{
cout<<"you have got 50 marks in PF";
}

if(marks < 50)
{

cout<<"you are fail in PF quiz";
}

}