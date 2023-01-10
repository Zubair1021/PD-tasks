#include<iostream>
using namespace std;
main()
{
int num1,num2,sum;
cout<<"Enter first no: ";
cin>>num1;
cout<<"Enter second no: ";
cin>>num2;
sum=num1+num2;
cout<<"Enter third no: ";
cin>>num1;
num2=num1+sum;
cout<<"Enter forth no: ";
cin>>num1;
sum=num1+sum;
cout<<"Enter fifth no: ";
cin>>num1;
num2=num1+sum;
cout<<"The result is: "<<num2;



}