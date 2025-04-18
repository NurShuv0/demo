#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, fence, width = 0;
    cin >> n >> fence;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] <= fence)
        {
        width += 1;
        }
        else
        {
            width += 2;
        }
    }

    cout << width;
}