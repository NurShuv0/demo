#include <iostream>
#include <vector>
#include <utility>
#include <array>
#include <algorithm>
#define ll long long
#define nl "\n"
#define sp " "
#define pb push_back
#define mp make_pair
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, row, swt, nr, count = 0, odd;
        cin >> n >> row;
        for (int i = 0; i < n; i++)
        {
            cin >> swt;
            if (swt % 2 == 0)
            {
                count += swt;
                nr = swt / 2;
                row -= nr;
            }
            else if (swt == 1 && row >=1)
            {
                count++;
                row--;
            }
            else if (swt % 2 != 0)
            {
                odd = swt - 1;
                count += odd;
                row -= odd;
                if (row > 0)
                {
                    count++;
                    row--;
                }
                //row -= (odd / 2);
            }
        }
        cout << count << nl << row <<nl;
    }
}