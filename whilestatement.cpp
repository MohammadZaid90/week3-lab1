#include<iostream>
using namespace std;

void ifpass(int marks);

int main()
{
  int marks;

while(true)
{
 cout<<"Enter marks: "<<endl;
 cin>>marks;

 ifpass(marks);
}

}

void ifpass(int marks)
{
 
if(marks > 50)
{
cout<<"you have passed your first quiz of PF"<<endl;
}

if(marks == 50)
{
cout<<"you have got 50 marks in PF"<<endl;
}

if(marks < 50)
{

cout<<"you are fail in PF quiz"<<endl;
}

}