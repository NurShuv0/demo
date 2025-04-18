#include<iostream>
#include<regex>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    string str;
    cin >> str;
    str = regex_replace(str, regex("WUB"), " ");
    cout << str;
}