#include<iostream>
#include<cstring>
#include<cmath>
#define nl "\n"
#define sp " "
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    string str;
    cin >> str;
    if(str.find("101") != string::npos || str.find("010") != string::npos)
        cout << "Good\n";
    else
        cout << "Bad\n";
    }

}