#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    speed;
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i == n)
        {
            if(i % 2 != 0)
            {
                cout << "I hate it"<< nl;
            }
            else 
            {
                cout << "I love it" << nl;
            }
        }
        else if(i % 2 != 0)
        {
            cout << "I hate that" << sp;
        }
        else{
            cout << "I love that" << sp;
        }
    }
}