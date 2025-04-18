#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long 
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,result = 0;
        cin >> n;
        vector<ll>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] != v[i + 1])
            {
                if(v[i] == v[i + 2] || v[i] == v[i - 1])
                result = i + 1;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << result << nl;
        }
        else {
            cout << result + 1<< nl;
        }
    }
}