#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    int n,nr,sw,count = 0 ;
    cin>> n;
    vector<int>v1,v2;
    for(int i =0 ; i < n; i++)
    {
        cin>> nr;
        v1.push_back(nr);
    }
    for(int i = 1; i < n; i++)
    {
        cin >> sw;
        v2.push_back(sw);
    }
    v1.insert(v1.end() , v2.begin() , v2.end());
    for(auto show: v1)
    {
        cout<< show <<" ";
    }
    for(int i = 0; i < v1.size(); i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(v1[i] == j)
            {
                count++;
                break;
            }
            continue;
        }
    }cout << nl << count << nl;
    if(count == n)
    {
        cout << "I become the guy.\n";
    }
    else 
    {
        cout << "Oh, my keyboard!\n";
    }
    
}