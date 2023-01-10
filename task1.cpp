#include<iostream>
#include<windows.h>
#include<c.math>
using namespace std;
main()
{
system("cls");
int num1;
int num2; 
int power;
cout<<"Enter first number:  ";
cin>>num1;
cout<<"Enter second number:  ";
cin>>num2;
power =pow(num1,num2);
cout<<"power is "<<power<<endl;  
}
