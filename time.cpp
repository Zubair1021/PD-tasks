#include<iostream>
using namespace std;
main()
{
int hour,minutes,newhour,newminutes;
cout<<"Enter hour(0--23)   : ";
cin>>hour;
cout<<"Enter minutes(0--59): ";
cin>>minutes;
newminutes=minutes+15;
if(newminutes<=60)
{
    cout<<hour<<":"<<newminutes;

}
if(newminutes>60)
{
    newhour=hour+1;
    newminutes=newminutes-60;
    cout<<newhour<<":"<<newminutes<<endl;
}
}
