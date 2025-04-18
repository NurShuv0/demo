#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        a[i]=toupper(a[i]);
    }
     for(int i=0;i<b.size();i++)
    {
        b[i]=toupper(b[i]);
    }
    cout<<a<<"\n"<<b<<nl;
    if(a==b)
    {
        cout<<"0\n";
    }
    else if(a<b)
    {
        cout<<"1\n";
    }
    else if(b>a)
    {
        cout<<"-1\n";
    }


}
