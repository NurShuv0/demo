#include<iostream>
using namespace std;
int main()
{

    int a[10],b;
    b=sizeof(a);
    int c=sizeof(a[1]);
    int over=b/c;
    cout<<over;



}
