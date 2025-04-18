#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int demo[5] = {5, 4, 3, 2, 1};

    int len = sizeof(demo)/sizeof(int);

    cout<<"Before sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }


    sort(demo, demo + len);

    cout<<"\n\nAfter sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
    return 0;
}
