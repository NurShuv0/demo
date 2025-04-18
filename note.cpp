
#include <iostream>
using namespace std;
int main()
{
    long long n,cnt1 =0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    cin >> n;
    while(n >= 100)
    {
        cnt1++;
        n -= 100;
    }
    while(n >= 20)
    {
        cnt2++;
        n -= 20;
    }
    while(n >=10)
    {
        cnt3++;
        n -= 10;
    }
    while(n >= 5)
    {
        cnt4++;
        n -= 5;
    }
    while(n >= 1)
    {
        cnt5++;
        n -=1;
    }
    int sum = cnt1 + cnt2 + cnt3 + cnt4 + cnt5;
    cout << sum << "\n";

}