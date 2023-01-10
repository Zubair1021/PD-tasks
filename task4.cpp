#include<iostream>
using namespace std;
float finalprice(float,string);
main()
{
float vehicalprice;
string vehicalcode;
float totalprice;
cout<<"Enter the price of vehical: ";
cin>>vehicalprice;
cout<<"Enter the code of vehical: ";
cin>>vehicalcode;
totalprice=finalprice(vehicalprice,vehicalcode);
cout<<"The final price of the vehival is "<<totalprice;
}
float finalprice(float vehicalprice,string vehicalcode)
{
    float totalprice;
    float taxamount;
if(vehicalcode=="m")
{
    taxamount= (vehicalprice*6)/100;
    totalprice= taxamount +vehicalprice;
}
if(vehicalcode=="e")
{
   taxamount= (vehicalprice*8)/100;
    totalprice= taxamount +vehicalprice;
}
if(vehicalcode=="s")
{
    taxamount= (vehicalprice*10)/100;
    totalprice= taxamount +vehicalprice;
}
if(vehicalcode=="v")
{
     taxamount= (vehicalprice*12)/100;
    totalprice= taxamount +vehicalprice;
}
if(vehicalcode=="t")
{
    taxamount =(vehicalprice*15)/100;
    totalprice= taxamount +vehicalprice;
}
return totalprice;
}