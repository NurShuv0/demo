#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    string nr, sw;
    cin >> nr;
    for (int i = 0; i < nr.size(); i++)
    {
        if (nr[i] != 'a' || nr[i] != 'e' || nr[i] != 'i' || nr[i] != 'o' || nr[i] != 'v')
        {
            sw.push_back(nr[i]);
        }
    }
    string wish = sw;
    reverse(sw.begin(), sw.end());
    if (sw == wish)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}