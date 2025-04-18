
#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    char x[3];
    while(n--)
    {

        for(int i=0; i<3; i++)
        {
            cin>>x[i];
        }
        for(int i=0; i<3; i++)
        {
            if(x[i]=='+' || x[i]=='x' )
            {
                if(x[i+1]=='+')
                {
                    if(x[i+2]=='x' || x[i+2]=='+')
                        cnt++;
                }

            }
        }
        for(int i=0; i<3; i++)
        {
            if(x[i]=='-')
            {
                if(x[i+1]=='-')
                {
                    if(x[i+2]=='x')
                        cnt--;
                }

            }
            else if(x[i]=='x')
            {
                if(x[i+1]=='-')
                {
                    if(x[i+2]=='-')
                    {
                        cnt--;
                    }
                }

            }
        }






    }
    cout<<cnt;

}
