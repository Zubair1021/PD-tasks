#include<iostream>
using namespace std;
main()
{
float redroses,whiteroses,tulips,totalamount,disamount;
cout<<"Enter total no of red roses purschased by the customer   : ";   cin>>redroses;
cout<<"Enter total no of white roses purschased by the customer : ";   cin>>whiteroses;
cout<<"Enter total no of tulips  purschased by the customer     : ";   cin>>tulips;
totalamount= (redroses*2.00)+(whiteroses*4.10)+(tulips*2.50);
cout<<"You total amount is "<<totalamount<<endl;
 if(totalamount>200)
 {
 disamount=totalamount-((20*totalamount)/100); 
cout<<"discount amount:  "<<disamount<<endl;
 }
}