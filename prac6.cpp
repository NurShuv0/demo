#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {0};
    while (true)
    {
        int num;
        cin >> num;
        if (num <= 0)
            break;
        else
            arr[num - 1]++;
    }
    for (int i=0; i<9; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " occurs: " << arr[i] << " time(s)" << endl;
        }
    }
    return 0;
}
