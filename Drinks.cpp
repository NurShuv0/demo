#include<iostream>
#include<numeric>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int juice[n];
        for(int i = 0; i < n; i++)
    {
        cin>> juice[i];
    }
    int sum;
    sum =  accumulate(juice,juice + n,0);
    double total = n * 100;
    auto cocktail = (sum/total);
    cout <<fixed <<setprecision(12)<< cocktail * 100;
}