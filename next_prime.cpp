#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int n, m;
    cin >> n >> m;
    bool flag = true;
    for(int i = n+1; i <= m; i++)
    {
        flag = true;
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
                flag = false;
                break;
            //else
                //flag = true;
                //break;
        }
        /*if(!flag)
        {
            break;
        }*/
        //if(m % i == 0)
        //{
        //    flag = false;
        //}
    }
    if(flag)
    {
        cout << "YES" <<nl;
    }
    else
    {
        cout << "NO" <<nl;
    }
}