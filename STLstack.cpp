#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
      st.push(1);
      st.push(4);
      st.push(15);
      st.push(4);
      st.push(7);st.push(9);
      cout<<st.top()<<"\n";
      st.pop();
      cout<<st.top();
}
