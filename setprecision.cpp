#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{


float x,y;
cin>>x>>y;

float  z=x+y;
float m=x*y;

cout<<showpoint<<"sum is "<<z<<endl<<"product is "<<m;
cout<<endl<<noshowpoint<<setprecision(10)<<x*y*z;
getch;
}

