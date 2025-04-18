#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define ll long long
#define INF 1e9 + 7
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
        ll N = n;
        ll count_zero = 0, digit = 0;
        ll first, right_zero = 0;
        bool flag = true;
        bool zero_flag = false;
        ll t_zero = 0;
        while(n != 0)
        {
            ll zero = n % 10;
            n /= 10;
            if(zero != 0)
            {
                zero_flag = true;
            }
            else if(zero_flag) t_zero++;
            if(zero == 0)
            {
                count_zero++;
            }
            if(zero == 0 && flag)
            {
                right_zero++;
            }
            else flag = false;
            digit++;
        }
        //cout << t_zero << sp << digit << sp ;
        // if(count_zero == 0)
        // {
        //     cout << digit - 1 << nl;
        // }
        // else if(N % 10 != 0)
        // {
        //     cout << digit - count_zero - 1 << nl;
        // }
        // else if(count_zero > right_zero)
        // {
        //     cout << (digit - (count_zero - right_zero + 1)) << nl;
        // }
        cout << digit - (t_zero + 1) << nl;
    }
}