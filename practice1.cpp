#include<iostream> 
using namespace std;
float printAggregate(string,float,float,float);
main()
{
 string name;
 float matricmarks,intermarks,ecatmarks,aggregate;
 cout <<"Enter your name: ";          cin>>name;
 cout <<"Enter your matric marks: ";  cin>>matricmarks;
 cout <<"Enter your inter marks: ";   cin>>intermarks;
cout <<"Enter your ecat  marks: ";   cin>>ecatmarks;
 aggregate=printAggregate(name, matricmarks,intermarks,ecatmarks);
cout<<"Your name is "<<name<<" and your aggregate is "<<aggregate<<"%"<<endl;

}
float printAggregate(string name,float matricmarks,float intermarks,float ecatmarks)
{
float totalmatric,totalinter,totalecat,totalaggregate;
totalmatric=(0.1*(matricmarks/1100))*100;
totalinter=(0.4*(intermarks/550))*100;
totalecat=(0.5*(ecatmarks/400))*100;
totalaggregate=totalmatric+totalinter+totalecat;
return totalaggregate;
}