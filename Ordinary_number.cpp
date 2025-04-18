#include<iostream>
#include<vector>
#include<cmath>
#define sp " "
#define nl " "
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i = (i * 10) + 1)
        {
            for(int j = 1 ; j <= 9 ; j++)
            {
                if(i * j <= n)
                    ans++;
            }
        }
        cout << ans << nl;
    }
}