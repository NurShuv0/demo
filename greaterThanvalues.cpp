#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,count = 0;
        cin >> a >> b >> c >> d ;
        vector<int>v(4);
        for(int i =0 ; i<4 ;i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < 4; i++)
        {
            if(v[i] < v[i+1])
            {
                count++;
            }
        }
        cout << count;
        
    }
}

