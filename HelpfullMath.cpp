#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt1=0, cnt2=0, cnt3=0;
    cin >> s;
    for (char c : s)
    {
        if (c == '1')
        {
            cnt1++;
        }
        else if (c == '2')
        {
            cnt2++;
        }
        else if (c == '3')
        {
            cnt3++;
        }
    }
    bool nur=true;
    for(int i=0; i<cnt1; i++)
    {
        if(!nur)
        {
            cout<<"+";
        }
        cout<<"1";
        nur=false;
    }
    for(int i=0; i<cnt2; i++)
    {
        if(!nur)
        {
            cout<<"+";
        }
        cout<<"2";
        nur=false;
    }
    for(int i=0; i<cnt3; i++)
    {
        if(!nur)
        {
            cout<<"+";
        }
        cout<<"3";
        nur=false;
    }

}
