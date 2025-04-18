#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int n, m;
    cin >> n >> m;
    bool flag = false;

    for (int i = n + 1; i <= m; i++)
    {
        flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            if (i == m)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
            return 0;
        }
    }
    cout << "NO" << nl;
    }
