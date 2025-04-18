#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int,greater<int>>s,st;

    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(5);
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<*s.rbegin();
    cout<<"\n"
;
    for(int i=0; i<5; i++)
    {
        int val;
        cin>>val;
        st.insert(val);
    }
    for(auto y:st)
    {
        cout<<y<<" ";
    }


}
