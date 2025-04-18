#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>
#include<set>
#define sp " "
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    map <int,string> mp;
    mp.insert({1,"abc"});
    mp[3] = "hello";
    mp.insert({2,"nr"});
    mp.insert({4,"My sweet"});
    mp.insert({5,"I"});
    mp.insert({6,"miss"});
    mp.insert({7,"U"});
    //mp.erase(1);
    mp.clear();
    cout << mp[1] << nl << mp[4];
    for(auto& swt: mp)
    {
        cout << "KEYS: " <<swt.first << sp <<"value: " << swt.second<<nl;
    }
}