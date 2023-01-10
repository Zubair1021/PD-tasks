#include<iostream>
using namespace std;
float pyramidvolume(float,float,float,string);
main()
{
float length,width,height,volume;
string outputunit;
cout<<"Enter the length: ";
cin>>length;
cout<<"Enter the width: ";
cin>>width;
cout<<"Enter the height: ";
cin>>height;
cout<<"Enter unit :";
cin>>outputunit;
volume=pyramidvolume(length,width,height,outputunit);
cout<<"volume is: "<<volume<<" cubic"<<outputunit;
}
float pyramidvolume(float length,float width,float height,string outputunit)
{
    float volume;
    if(outputunit=="centimeter")
    {
         volume = ((length*width*height)/3)*1000000;  
    }
     if(outputunit=="kilometer")
    {
         volume = ((length*width*height)/3)/1000000000;  
    }
     if(outputunit=="millimeter")
    {
         volume = ((length*width*height)/3)*1000000000;  
    }
 return volume;
}
