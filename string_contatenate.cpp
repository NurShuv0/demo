#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
int main()
{
    string str,s;
    cin >> str >> s;
    string result = str + s;
    cout << str.size() <<sp << s.size() << nl << result << nl;
    char c = s[0];
    swap(str[0], s[0]);
    cout << str << sp << s << nl;
}