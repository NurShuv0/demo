#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>> t;
    while(t--)
    {
        int nur,sw;
        cin>> nur >> sw;
        if( (sw - nur >= 2))
        {
            count++;
        }
    }
            cout<< count;
}