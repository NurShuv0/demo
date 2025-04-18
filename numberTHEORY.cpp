#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
    speed;
    double n, m, a;
    cin >> n >> m >> a;
    //ll result = ((n + a - 1) / a) * ((m+a-1)/a);
    double result  = ceil(n / a) * ceil(m/a);
    cout <<  fixed << setprecision(0);
    if(n == 1 && m == 1)
    {
        cout << "1"<< nl;
    }
    else  if(n > m && m <= a)
    {
        cout << ceil(n/a) <<nl;
    }
    else  if(n < m && n <= a)
    {
        cout << ceil(m/a) <<nl;
    }
    else{
            cout << result << nl;
    }
}
