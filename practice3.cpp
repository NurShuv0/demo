#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<"x is max";
    }
    else if(y>x && y>z)
    {
        cout<<"y is maz";

    }
    else
    {
        cout<<"z is max";
    }
}
