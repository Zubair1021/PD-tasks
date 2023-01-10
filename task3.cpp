#include<iostream>
using namespace std;
main()
{
float initialVelocity;
float finalVelocity;
float time;
float accerlation;
cout<<"Enter Accerlation: ";
cin>>accerlation;
cout<<"Enter initial velocity: ";
cin>>initialVelocity;
cout<<"Enter Time: ";
cin>>time;
finalVelocity=(accerlation*time)+initialVelocity;
cout<<"Final Velocity:"<<finalVelocity;
}