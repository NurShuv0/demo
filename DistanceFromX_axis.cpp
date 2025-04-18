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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int distance = 0, optimal = INF;
        for(int i = 0; i <= max({x1, x2, x3}); i++)
        {
            distance = abs(x1 - i) + abs(x2 - i) + abs(x3 - i);
            if(distance < optimal)
                optimal = distance;
        }
        cout << optimal << nl;
    }
}