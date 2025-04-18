#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        if (sum % n == 0 && sum / n == x)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}