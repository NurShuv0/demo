#include<iostream>
using namespace std;
int main()
{
    int t,count = 0;
    cin >> t;
    int arr[t];
    for(int i = 0; i< t; i++)
    {
        cin>> arr[i];
    }
    for(int i= 0; i<t; i++)
    {
        if(arr[i] != arr[i+1])
        {
            count++;
        }
    }
    cout << count;
}