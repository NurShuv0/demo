#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int odd = 0, even = 0;
    if (v[0] % 2 == 0)
    {
        even++;
    }
    else
        odd++;
    if (v[1] % 2 == 0)
        even++;
    else 
        odd++;
    if (v[2] % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    //cout << odd << sp << even << nl;
    for (int i = 0; i < n; i++)
    {
        if (odd > 1)
        {
            if (v[i] % 2 == 0)
            {
                cout << i + 1 << nl;
                break;
            }
        }
        else
        {
            if (v[i] % 2 != 0)
            {
                cout << i + 1 << nl;
                break;
            }
        }
    }
}