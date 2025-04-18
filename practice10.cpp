#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main() 
{
    speed
    int t;
    cin >> t;  
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<int> result(n + 1);
        for (int i = 1; i <= n; i++) {
            if(i % 2 == 0 && k % 2 == 0)
            {
                result[i] = ((i + k) % n) + 1;
            }
            else 
                result[i] = ((i + k - 1) % n) + 1;
        }
        for (int i = 1; i <= n; i++) {
            cout << result[i] << sp;
        }
        cout << nl;
    }
}