#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define sp " "
#define nl "\n"
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
    bool flag = false;
    while (tt--)
    {
        string swt;
        cin >> swt;
        for (int i = 0; i < swt.size(); i++)
        {
            if (swt[i] == swt[i + 1])
            {
                flag = true;
                break;
            }
            else{
                flag = false;
            }
        }
        if(flag)
        {
            cout << 1 << nl;
        }
        else{
            cout << swt.size() << nl;
        }
    }
}