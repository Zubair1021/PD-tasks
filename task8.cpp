#include<iostream>
using namespace std;
main()
{
float vegetableweight;
float fruitweight;
int vegetableprice;
int fruitprice;
float totalvegetableprice;
float totalfruitprice;
float totalAmount;
float totalAmountRP;
cout<<"Enter vegetable weight:";
cin>>vegetableweight;
cout<<"Enter fruit weight:";
cin>>fruitweight;
cout<<"Enter vegetable price per kilogram:";
cin>>vegetableprice;
cout<<"Enter fruit price per Kilogram:";
cin>>fruitprice;
totalvegetableprice=vegetableweight*vegetableprice;
totalfruitprice=fruitweight*fruitprice;
totalAmount=totalvegetableprice+totalfruitprice;
totalAmountRP=totalAmount/1.94;
cout<<"total amount in RP:  "<<totalAmountRP;





}