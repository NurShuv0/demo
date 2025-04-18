#include<iostream>
#include<vector>
#include<iomanip>
#include<cstring>
#include<algorithm>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '\\')
        {
            break;
        }
        else 
        {
            cout << str[i];
        }
    }
    cout << nl;
}