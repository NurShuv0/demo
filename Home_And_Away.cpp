#include <iostream>
#include <vector>
#include<utility>
using namespace std;
int main()
{
    int n, swt = 0;
    cin >> n;
    vector < pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (v[i].first == v[j].second)
                {
                    swt++;
                }
            }
        }
    }
    cout << swt;
}