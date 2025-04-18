#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        int swt = 0;
        string str;
        cin >> str;
        //sort(str.begin(),str.end());
        string comp = "codeforces";
        //sort(comp.begin(),comp.end());
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] != comp[i])
            {
                swt++;
            }
        }
        cout << swt << nl;
    }
}