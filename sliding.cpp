#include<iostream>
#include<cmath>
#include<vector>
#include<numeric>
#define  ll long long
#define  sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll row,col,r,c;
        cin >> row >> col >> r >> c;
        ll position = (r - 1) * col + c;
        ll sum = 0;
        for(int i = position + 1; i <= row * col; i++)
        {
            ll p_row = (i - 2) / col + 1;
            ll p_col = (i - 2) % col + 1;
            ll c_row = (i - 1)/ col + 1;
            ll c_col = (i - 1) % col+1;
            sum += abs(c_row - p_row) + abs(c_col - p_col);
        }
        cout << sum << nl;
    }

}