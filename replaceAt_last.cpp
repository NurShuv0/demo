#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed
    int tt;
    cin >> tt;
    while(tt--)
    {
        string swt;
        cin >> swt;
        swt.pop_back();
        int size = swt.size();
        swt[size - 1] = 'i';
        cout << swt << nl; 
    }
}