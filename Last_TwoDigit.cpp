#include<iostream>
#include<set>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<numeric>
#include<map>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int  main()
{
    speed;
    ll n,digit = 0;
    cin >> n;
    ll result = pow(5, n);
    bool flag = true;
    while(flag == true)
    {
        digit = result % 100;
        flag = false;
    }
    cout << digit << nl;
}