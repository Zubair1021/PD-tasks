#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float printadd(float,float);
float printsub(float,float);
float printmul(float,float);
float printdiv(float,float);
main()
{
float num1,num2,sum,sub,mul,div; int choice,resultmax;
system("color 56");
system("cls");
cout<<"Enter first number : "; cin>>num1;
cout<<"Enter second number: "; cin>>num2;
cout<<"Enter 1 for addition------ 2 for subtraction------ 3 for multiplication----- 4 for division"<<endl<<endl;
cout<<"Your choice: "; cin>>choice;
 if(choice==1)
 {
  sum = printadd(num1,num2);
  cout<<"Addition: "<<sum<<endl; 
 }
 if(choice==2)
 {
  sub = printsub(num1,num2);
  cout<<"subtraction: "<<sub<<endl; 
 }
 if(choice==3)
 {
  mul = printmul(num1,num2);
  cout<<"multiplication: "<<mul<<endl; 
 }
 if(choice==4)
 {
  div = printdiv(num1,num2);
  cout<<"division: "<<div<<endl; 
 }
resultmax=max(num1,num2);
cout<<"maximum number is "<<resultmax<<endl;
}
float printadd(float num1,float num2)
{
float sum = num1+num2;
return sum;
}
float printsub(float num1,float num2)
{
float sub = num1-num2;
return sub;
}
float printmul(float num1,float num2)
{
float mul = num1*num2;
return mul;
}
float printdiv(float num1,float num2)
{
float div = num1/num2;
return div;
}
