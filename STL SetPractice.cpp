#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    for (int i = 0; i < 5; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
        cout << *s.begin() << "  ";  // lowest number
        cout << *s.rbegin() << "\n"; // higest number
    }
}
