#include<iostream>
using namespace std;
main()
{
string movieName;
int adultTickectP;
int childTickectP;
int adultTicketS;
int childTickectS;
int charityPer;
int totalAmount;
int amountAfterChar;
cout<<"Enter movie name: ";
cin>>movieName;
cout<<"Enter Adult ticket Price: ";
cin>>adultTickectP;
cout<<"Enter Child ticket Price: ";
cin>>childTickectP;
cout<<"Enter total Adult ticket sold: ";
cin>>adultTicketS;
cout<<"Enter total Child ticket sold: ";
cin>>childTickectS;
cout<<"Enter percentage of the amount to be donated to the charity: ";
cin>>charityPer;
cout<<endl;
cout<<"-------------------------------------------------------------------------- "<<endl;
totalAmount=(adultTickectP*adultTicketS)+(childTickectP*childTickectS);
amountAfterChar=totalAmount-(charityPer*totalAmount)/100;
cout<<"total amount: "<<totalAmount<<endl;
cout<<"total amount after donation: "<<amountAfterChar<<endl;


}