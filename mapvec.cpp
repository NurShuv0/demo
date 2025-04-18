#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        int maxFreq = 0;
        for (auto &entry : freq)
        {
            maxFreq = max(maxFreq, entry.second);
        }

        int operations = n - maxFreq;
        cout << operations << nl;
    }
    return 0;
}
