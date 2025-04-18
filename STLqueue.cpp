#include<bits/stdc++.h>
using namespace std;
int main()
{

queue<int > q;
q.push(2);
q.push(3);
q.push(7);
q.push(10);
q.pop();
cout<<q.front()<<"\n";
if(q.empty())
    cout<<"empty";
else
    cout<<"not empty";


}
