#include <iostream>
#include <string>
#include <set>
#define sp " "
#define nl "\n"
using namespace std;

bool isNumber(char s)
{
    return (s >= '0' && s <= '9');
}

int main()
{
    char str;
    freopen("9 Input.txt", "r", stdin);

    //getline(cin, str);
    set<char> st;
    while(cin >> str)
    {
        if(isNumber(str))
        {
            st.insert(str);
        }
    }
    /*for (int i = 0; i < str.size(); i++)
    {
        if (isNumber(str[i]))
        {
            st.insert(str[i]);
        }
    }*/
    for (char num : st)
    {
        cout << num << sp << "is a digit" << nl;
    }
    cout << "total digit = " << st.size() << nl;
}
