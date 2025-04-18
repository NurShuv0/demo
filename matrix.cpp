#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<string.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define ll long long
#define INF 1e9 + 7
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <= 2 * n; i++)
    {
        cout << i << sp;
    }
    cout << nl;
}
int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}