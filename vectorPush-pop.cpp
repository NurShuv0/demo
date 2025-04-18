#include<bits/stdc++.h>
using namespace std;
int main()
{   int x,n;
cin>>n;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.pop_back();
    v.pop_back();
   // v.pop_back();
    int sz=v.size();
    cout<<"previous size:"<<sz<<nl;//size of vector
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

     cout<<"new size:"<<v.size()<<nl;//size after adding new elements
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<nl;
       v. pop_back();

    }
}
