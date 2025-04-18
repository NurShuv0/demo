#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,fn,sum = 0;
    cin>> n;
    for( int i= 1; i <= n;i++)
    {
        fn=pow(-1,i) * i;
        
        sum += fn;
    }
    cout << sum<<nl;

}