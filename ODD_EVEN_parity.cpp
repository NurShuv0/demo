#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(0);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] % 2 != 0)
            {
                cnt++;
                continue;
            }
        }
        cout << (cnt % 2 == 0? "YES": "NO") << nl;
    }
}