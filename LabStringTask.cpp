#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,result;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);

        if(str[i]!='a' && str[i]!='e' && str[i]!= 'i' && str[i]!= 'o' && str[i]!= 'u' && str[i]!='y' &&
            str[i]!='A' && str[i]!='E' && str[i]!= 'I' && str[i]!= 'O' && str[i]!= 'U' && str[i]!='Y')
        {

           result+=str[i];

        }


    }
    for(int i=0;i<result.length();i++)
    {
        cout<<"."<<result[i];
    }
    cout<<"\n";






}
