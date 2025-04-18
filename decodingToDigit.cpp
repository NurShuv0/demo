#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<algorithm>
#include<iomanip>
#define ll long long 
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define pbb pop_back
using namespace std;
int main()
{
    speed;
    string str;
    cin >> str;
    int i = 0;
    while(!str.empty())
    {
        if(str[0] == '-' && str[1] == '.')
        {
            cout<<"1";
            str.erase(0,2);
        }
        else if(str[0] == '.')
        {
            cout << "0";
            str.erase(0,1);
        }
        else
        {
            cout <<'2';
            str.erase(0,2);
        }
    }
}