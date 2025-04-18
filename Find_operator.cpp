#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#define sp " "
#define nl "\n"
using namespace std;

bool isOperator(char s)
{
    if (s == '+' || s == '-' || s == '*' || s == '/' ||
        s == '!' || s == '<' || s == '>' || s == '=')
    {
        return true;
    }
    else
        return false;
}

int main()
{
    string str;
    int count = 0;
    // freopen("9 Input.txt", "r", stdin);
    getline(cin, str);
    set<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (isOperator(str[i]))
        {
            st.insert(str[i]);
            count++;
        }
    }
    for (auto &c : st)
    {
        cout << c << sp << "Is an operator" << nl;
    }
    cout << "Total number of operator used is : " << count << nl;

    return 0;
}
