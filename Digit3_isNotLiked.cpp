#include<iostream>
#include<algorithm>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, result = 0;
        cin >> n;
        for(int i = 0; i < n;)
        {
            result++;
            if(result % 3 != 0 &&  result % 10 != 3)
            {
                i++;
            }
        }
        cout << result<< nl;
    }
}