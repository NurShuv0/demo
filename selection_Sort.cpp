#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min_j = i;
        int min_x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min_x)
            {
                min_j = j;
                min_x = arr[j];
            }
        }
        arr[min_j] = arr[i];
        arr[i] = min_x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
