#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s="abcde",s1,s2,s3,s4,s5;
    int a=s.length();
    cout<<a<<nl;
    s1=s.substr(1,3);
    cout<<s1<<nl;
    s2=s.erase();//erase all strings
    cout<<s2<<nl;
    s3=s.erase(1,2);
    cout<<s3<<nl;
    s4=s.insert(1,"xyz");
    cout<<s4<<nl;


}
