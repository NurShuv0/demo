#include<bits/stdc++.h>
using namespace std;
int main ()

{
    string s;
    cin>>s;
    string txt=s;

    if (txt.length()%2==0)
    {
        cout<<"CHAT WITH HER!"<<nl;
    }else
    {
        cout<<"IGNORE HIM!"<<nl;
    }

    return 0;
}
