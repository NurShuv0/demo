#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        string swt;
        cin >> swt;
        bool flag = true;
        while (flag)
        {
            flag = false;
            for (int i = 0; i < swt.size(); i++)
            {
                if (swt[i] == swt[i + 1] && i != 0)
                {
                    swt.erase(i, 1);
                    swt[i] = swt[i - 1];
                    flag = true;
                }
                else if(swt[i] == swt[i + 1] && i == 0)
                {
                    swt.erase(i, 1);
                    flag = true;
                }
                //cout << swt << nl;
            }
        }
        cout << swt.size() << nl;
    }
}