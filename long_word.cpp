#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m=s.size();

    if(m<10)
    {
        cout<<s;
    }
    else
    {
        cout<<s[0]<<s.size()<<s[s.size()-1];
    }


}
