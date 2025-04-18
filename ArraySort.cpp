#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}
