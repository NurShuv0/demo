#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long 
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    string str;
    cin >> str;
    int num = stod(str);
    ll sum = 0, rem;
    while(!str.empty())
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
        str.pop_back();
    }
    cout << sum <<nl;
}