#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<numeric>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b)
        {
            cout << c << nl;
        }
        else if(a == c)
        {
            cout << b << nl;
        }
        else if(b == c)
        {
            cout <<  a << nl;
        }
    }
}