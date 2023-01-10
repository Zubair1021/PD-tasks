#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int,int);
void move(int,int);
main()
{ 
int x,y;
x=3;
y=18;
system("cls");
printmaze();
while(true)
{
move(x,y);
    if(y>5)
    {
    y=y-1;
    }
}
    if(y==18)
    {
    gotoxy(x,y-1);
    cout<<" ";
     y=3;
    }
 
}
void printmaze()
{
cout<<"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"e                                                                                    e"<<endl;
cout<<"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void move(int x , int y )
{

gotoxy(x,y);
cout<<"P";
Sleep(300);
}