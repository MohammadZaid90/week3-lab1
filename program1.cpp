#include<iostream>
using namespace std;

void name(string name);

int main()
{
 string nameOne;
cout<<"Enter your name: ";
cin>>nameOne;
name(nameOne);

string secondName = "Ahmed";
name(secondName);

name("Akmal");

}

void name(string name)
{
 cout<<"My name is: "<<name<<endl;
}
