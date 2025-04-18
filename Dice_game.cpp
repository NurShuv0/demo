#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    int t,mishka = 0, chris = 0;
    cin >> t;
    while(t--)
    {
        vector<int>v(2);
        cin >> v[0] >> v[1];
        if(v[0] > v[1])
        {
            mishka++;
        }
        else if(v[1] > v[0])
        {
            chris++;
        }
    }
    if(mishka > chris)
    {
        cout << "Mishka" << nl;
    }
    else if(mishka < chris)
    {
        cout << "Chris" << nl;
    }
    else 
    {
        cout << "Friendship is magic!^^" << nl;
    }
}