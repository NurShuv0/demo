#include <iostream>
#include <set>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    set<char> st;
    string str;
    getline(cin, str);
    string sw = str.substr(1, str.size() - 2);
    for (auto c : sw)
    {
        {
            st.insert(c);
        }
    }
    if (st.size() > 1)
    {
        cout << st.size() - 2;
    }
    else if (st.size() == 1)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}