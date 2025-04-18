#include<iostream>
#include<array>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<utility>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<stack>
#include<vector>
#include<bitset>
#include<climits>
#define ll long long
#define ld long long double
#define nl "\n"
#define sp " "
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
#define mp make_pair
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int nr, swt = 1, time, time_need;
    cin >> nr >> time_need;
    ll rem = 240 - time_need;
    while(rem != 0 && swt <= nr)
    {
        if(rem >= 5 * swt)
        {
            time = (5 * swt);
            rem -= time;
            swt++;
        }
        else
        {
            break;
        }
    }
    cout << swt - 1<< nl;
}