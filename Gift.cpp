#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n+1),v(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
        v[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout <<v[i]<< " ";
    }
}