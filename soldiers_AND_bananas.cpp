#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,total=0;
    cin>>k>>n>>w;
    for(int i=0;i<=w;i++)
    {
    
         total=k*i+total;
    }
    int borrow=total-n;
    if(borrow >= 0)
    {
        cout<<borrow;
    }
    else
    cout<<"0";
}