#include<iostream>
using namespace std;
float otherday(float);
float onsunday(float);
main()
{
float amount,sundayamount,otheramount;
string day;
cout<<"Enter a day    : ";  cin>>day;
cout<<"Enter an amount: ";  cin>>amount;
 if(day=="sunday")
 {
sundayamount=onsunday(amount);
cout<<"After discount : "<<sundayamount<<endl;
 }
 if(day!="sunday")
 {
otheramount=otherday(amount);
cout<<"After discount : "<<otheramount<<endl;
 }
}
float otherday(float amount)
{
float totalamount=amount-((5*amount)/100);
return totalamount;
}
float onsunday(float amount)
{
float sundayamount=amount-((10*amount)/100);
return sundayamount;
}