#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
int main()
{
    speed
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 1;
    int swt = ans;
    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] <= v[i + 1])
        {
            ans++;
        }
        else ans = 1;
        swt = max(swt, ans);
    }
    cout << swt << nl;
}