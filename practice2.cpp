#include<iostream>
using namespace std;
main()
{
int number,num1,num2,num3,num4,num5,num6,num7,sum;
while(true)
 {
cout<<"Enter a  four digit number  ";
cin>>number;
num1=number%10;
num2=number/10;
num3=num2%10;
num4=num2/10;
num5=num4%10;
num6=num4/10;
num7=num6%10;
sum=num1+num3+num5+num7;
cout<<sum<<endl;
  }
}