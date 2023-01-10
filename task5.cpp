#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int,int);
main()
{ 
    int x,y;
    x=3;
    y=3;
    printmaze();
    gotoxy(x,y);
    cout<<"P";

}
void printmaze()
{
cout<<"###################################################################################"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"#                                                                                 #"<<endl;
cout<<"###################################################################################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}