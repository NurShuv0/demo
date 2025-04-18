#include<iostream>
#include<vector>
#include<iomanip>
#include<numeric>
#include<cstring>
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
    cin >> str;
    for(int i = 0; i < str.size(); i += 2)
    {
        cout << str[i];
    }
    if(str.size() % 2 == 0)
    {
        cout << str[str.size() - 1];
    }
    cout << nl;
    }
    
}