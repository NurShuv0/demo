#include<iostream>
#include<cstring>
#include<algorithm>
#define  ll long long
#define sp " "
#define nl "\n"
#define sort(str) sort(str.begin(), str.end())
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
    {
        speed;
        int t;
        cin >> t;
        while(t--)
        {
            string str;
            cin >> str;
            for(int i = 0; i < str.size();  i++)
            {
                str[i] = toupper(str[i]);
            }
            if(str == "YES")
            {
                cout << "YES\n";
            }
            else 
            {
                cout << "NO\n";
            }
        }
    }