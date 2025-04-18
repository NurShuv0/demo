#include<bits/stdc++.h>
using namespace std;

bool notdistinctDigit(int year)
{
    set <int> digit;
    while(year > 0)
    {
        int rem = year % 10;
        if(digit.count(rem))
        {
            return true;
        }
        else

        digit.insert(rem);
        year/=10;
    }
    return false;
}


int main()
{
    int year;
    cin>> year;
    year++;
    while(notdistinctDigit(year))
    {
        year++;
    }
    cout<<year;
}