#include<iostream>
#include<vector>
#include<map>
#include<numeric>
#include<algorithm>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        swap(a[0],b[0]);
        cout <<a << sp << b << nl;
    }

}