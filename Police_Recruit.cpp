#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#include <utility>
#include <iomanip>
#include<cmath>
#include<array>
#include<cstring>
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    int n, count = 0, cnt = 0;
    cin >> n;
    vector<int>v;
    while (n--)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] != -1)
        {
            cnt += v[i];
        }
        else if(cnt > 0 && v[i] == -1)
        {
            cnt--;
        }
        else if (cnt == 0 && v[i] == -1)
        {
            count++;
        }
    }
    cout <<  count << nl;
}