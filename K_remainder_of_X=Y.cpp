#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long 
#define sp " "
#define nl "\n"
#define speed  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    speed;
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
        long long k = ((n - y) / x) * x + y;
        
        cout << k << nl;
    }
    
    return 0;
}
