#include <bits/stdc++.h>
using namespace std;
int main()
{
string str;
int arr[26] = {0};
int cnt = 0;
cin >> str;
for(int i = 0; i < str.size(); i++)
{
str[i] = tolower(str[i]);
arr[str[i]-'a']++;
}
for(int i = 0; i < 26; i++)
{
if(arr[i])
cnt++;
}
if (cnt == 26)
cout<<"YES"<<nl;
else
cout<<"NO"<<nl;
}
