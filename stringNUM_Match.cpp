#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
#include<algorithm>
#define ll long long
#define  sp " "
#define nl "\n"
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    string str;
    cin >> str;
    if(str.find("10000000") != string::npos || str.find("01111111") != string::npos ||
    str.find("00000001") != string::npos || str.find("11111110") != string::npos)
    {
        cout <<"YES" <<sp;
    }
    else
    {
        cout << "NO" <<sp;
    }
}