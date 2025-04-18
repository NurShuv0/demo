#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n/2 % 2 != 0)
        {
            cout <<"NO"<< nl;
            continue;
        }
        else
        {
            cout << "YES" << nl;
        }
        vector<int>even,odd;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        int half = n/2;
        odd[half - 1] = odd[half - 1] + half;
        for(int i = 0; i < n/2; i++)
        {
            cout << even[i] << sp;
        }
        for(int i = 0; i < n/2; i++)
        {
            cout << odd[i] <<sp;
        }
        cout << nl;
    }
}