#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(11);
    ms.insert(5);
    ms.insert(11);
    ms.insert(9);
    ms.insert(9);
    ms.erase(ms.find(9));
    for(auto x:ms)
        cout<<x<<" ";



}
