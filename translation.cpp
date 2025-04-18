//reverse string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sweet,nur;
    cin>>nur>>sweet;
    reverse(nur.begin(),nur.end());
    if(nur==sweet)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}