#include <iostream>
#include <set>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nr, sw;
    set<int> st;
    int p;
    cin >> p;
    while (p--)
    {
        cin >> nr;
        if (nr != 0)
        {
            st.insert(nr);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> sw;
        if (sw != 0)
        {
            st.insert(sw);
        }
    }
    if (st.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
}