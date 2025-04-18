#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    int x;
    bool ishard = false;
    while(t--)
    {
        int opinion;
        cin>>opinion;
        if( opinion == 1)
        {
            ishard = true;
        }
    }
    if( !ishard)
    {
        cout<<"EASY\n";
    }
    else 
    {
        cout<< "HARD\n";
    }
    
}