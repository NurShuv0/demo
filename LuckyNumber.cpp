#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
            n /= 10;
        }
        else
        {
            n /= 10;
        }
    }
    //cout << count << "\n";
    if (count == 7 || count == 4)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}