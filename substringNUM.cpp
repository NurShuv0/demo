#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int  main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n;
        cin >> n;
        //vector<int>v(n),vec(n);
        for(int i = 0; i < n; i++)
        {
            int a,b;
            cin >> a >> b;
            str[a-1] = b-1;
            bool flag = true;
            for(int j = 0; j < str.size();  j++)
            {
                if(str[j] == '1' && str[j + 1] == '1' && str[j + 2] == '0' && str[j + 3] == '0')
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
            {
                cout << "YES" << nl;
            }
            else 
            {
                cout << "NO" << nl;
            }
        }
    }
}