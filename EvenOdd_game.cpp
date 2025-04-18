#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
int main()
{
    speed;
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? "Mahmoud" : "Ehab") << nl;
}