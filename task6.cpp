#include<iostream>
using namespace std;
main()
{
int bagSize;
int bagCost;
int bagArea;
int costPerPound;
int costAreaPerSquare;
cout<<"Enter Size Of Fertilizer Bags in Pounds: ";
cin>>bagSize;
cout<<"Enter cost Of Fertilizer Bags: ";
cin>>bagCost;
cout<<"Enter Area Covered by each Fertilizer Bags in Square feet: ";
cin>>bagArea;
cout<<endl;
cout<<"------------------------------------------------------------------------ "<<endl;
costPerPound=bagCost/bagSize;
costAreaPerSquare=bagSize*bagArea;
cout<<"cost Of Fertilizer per pound: "<< costPerPound<<endl;
cout<<"cost Of Fertilizing the area per square feet: "<<costAreaPerSquare;




}