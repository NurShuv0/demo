#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;
    if(s.size()<=100 || str.size()<=100)
    {
           
             for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
    }
    
    if(s<str)
    {
        cout<<"-1\n";
    }
   else if(str<s)
    {
        cout<<"1\n";
    }
  else if(str==s)
    {
        cout<<"0\n";
    }


    }

     

    
    
     

  return 0;


}