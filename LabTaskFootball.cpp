#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    string str[n],p,q;
    for(int i=0; i<n; i++)
    {
        cin>>str[i];

    }
    for(int i=0; i<n; i++)
    {
        p=str[0];
        if(str[i]==p)
        {
            cnt1++;
        }
        else{
                q=str[i];
            cnt2++;
        }

    }
    if(cnt1>cnt2)
    {
        cout<<p;
    }
    else
    {
        cout<<q;
    }

}
