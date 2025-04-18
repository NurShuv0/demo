#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define sp " "
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        ll  n, x, k;
        cin >> n >> x >> k;
        ll count = 0, temp = x;
        string str;
        cin>> str;
        for(int i = 0; i < k; i++)
        {
            cout << x;
            if(str[i] == 'L')
            {
                x--;
                if(x == 0)
                {
                    count++;
                    x = temp;
                }
            }
            else if(str[i] == 'R')
            {
                x++;
                if(x == 0)
                {
                    count++;
                    x = temp;
                }
            }
            
        }
        cout << count << nl;
    }
}