#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int sum = 0;
    for(const auto &ch:str)
    {
        if(isdigit(ch))
        {
            sum  += ch - '0';
        }
    }
    cout <<sum; 
}