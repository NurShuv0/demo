#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define INF 1e9 + 7
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        cout << (k % 2 != 0 ? "YES" : "NO") << nl;
    }
}