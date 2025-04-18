#include<iostream>
#include<vector>
#include<algorithm>
#define  sp " "
#define nl "\n"
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int L, l, R, r;
        cin >> l >> r >> L >> R;
        int mxl = max(L, l);
        int mnr = min(R, r);
        int ans = mnr - mxl;
        if( ans < 0)
        {
            ans = 1;
        }
        else
        {
            if(l != L)
            {
                ans++;
            }
            if(R != r)
            {
                ans++;
            }
        }
        cout << ans << nl;
    }
}