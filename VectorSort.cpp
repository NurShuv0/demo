#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v,x,y;
v.push_back(2);
v.push_back(4);
v.push_back(1);
v.push_back(3);
v.push_back(9);
v.push_back(5);
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<"\n";
x.push_back(10);
x.push_back(15);
x.push_back(12);
x.push_back(11);
x.push_back(18);
x.push_back(16);
x.push_back(13);
sort(x.begin()+1,x.end()-2);
for(int i=0;i<x.size();i++)
{
    cout<<x[i]<<" ";
}

  cout<<"\n";
  y.push_back(25);
  y.push_back(24);
  y.push_back(23);
  y.push_back(22);
  y.push_back(28);
  y.push_back(27);
  y.push_back(25);
  sort(y.begin()+2,y.begin()+5);
  for(int i=0;i<y.size();i++)
  {
      cout<<y[i]<<" ";
  }




}
