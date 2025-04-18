#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<iomanip>
#define ll long long
#define sortvector sort(v[2].begin(), v[2].end())
#define sortstring sort(str.begin(), str.end())
#define nl "\n"
#define smooth ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
    {
        smooth;
        vector<string>v(3);
        for(int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        string str = v[0] + v[1];
        //sort(v[2].begin(), v[2].end());
        sortvector;
        sortstring;
        //sort(str.begin(), str.end());
        if(str == v[2])
        {
            cout << "YES" << nl;
        }
        else 
        {
            cout << "NO" <<nl;
        }
        
    }