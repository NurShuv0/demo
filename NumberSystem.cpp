#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <iomanip>
#include <cstring>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed
    ll n;
    cin >> n;
    vector<ll>v;
    while(n != 0)
    {
        int num = n % 2;
        if(num == 1)
        {
            //cout << 7;
            v.push_back(7);
        }
        else 
        {
            //cout << num;
            v.push_back(num);
        }
        n /= 2;
    }
    for(int i = v.size() - 1 ; i >= 0 ; i--)
    {
        cout << v[i];
    }
}