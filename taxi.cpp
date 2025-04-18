#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int n;
    cin >> n;
    vector<int>v(5, 0);
    for(int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        v[s]++;
    }
    int sum = v[4];
    sum += ceil(v[2] / 2.0);
    sum += v[3];
    int extra1 = v[1] - v[3];
    if(v[2] % 2 != 0)
    {
        extra1 -= 2;
    }
    if(extra1 > 0)
        sum += ceil(extra1 / 4.0);
    cout << sum << nl;
}