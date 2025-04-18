#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;
        int y;
        bool flag = false;
        int x = y = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'U')
                y++;
            else if (str[i] == 'D')
                y--;
            else if (str[i] == 'L')
                x--;
            else if (str[i] == 'R')
                x++;
            if(x == 1 && y == 1)
            {
                flag = true;
                //cout << "Ok";
                break;
            }
        }
        cout << (flag? "YES": "NO") << nl;
    }
}