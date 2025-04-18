#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define sp " "
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, count = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            if(i % 3 == i % 5)
            {
                count++;
            }
        }
        cout << count << nl;
    }
}