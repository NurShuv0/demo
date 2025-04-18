// BY THE NAME OF ALLAH

#include <iostream>
#include <iomanip>
#include <cstring>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char nr[n],sw[n];
    cin >>nr;
    for(int i = 0; i < n; i++)
    {
        sw[i] = tolower(nr[i]);
    }
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(sw[i]);
    }
    if (st.size() >= 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}