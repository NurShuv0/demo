#include<iostream>
#include<cmath>
#include<algorithm>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    string str;
    cin >> str;
    int j = 0;
    string hello = "hello";
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == hello[j])
        {
            j++;
        }
        if(j == hello.size())
        {
            cout << "YES" << nl;
            return 0;
        }
    }
    cout << "NO" << nl;
    return 0;
}