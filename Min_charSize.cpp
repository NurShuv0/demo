#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int max = str[n - 1];
        cout << max - 96 << nl;
    }
}