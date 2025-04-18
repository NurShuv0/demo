#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tt;
   cin>>tt;
   while(tt--)
   {
    int k,n;
    cin>>k>>n;
    int result=n+floor((n-1)/(k-1));
    cout<<result<<"\n";
   } 
}