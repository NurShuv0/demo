
#include <iostream>
#include <set>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    set<char> st;
    for (char c : str)
    {
        if (c >= 97 && c <= 122)
        {
            st.insert(c);
        }
    }
    cout << st.size();
}