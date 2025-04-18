#include<iostream>
#define nl "\n"
#define sp " "
using namespace std;
class date{
    public:
    int day,month,year;
    date()
    {
        int  day = month = year = 0;
    }
    date(int a, int b, int c)
    {
        day = a;
        month = b;
        year = c;
    }

};
void validate(date obj)
{
    /*if((obj.day < 1 || obj.day > 31) && (obj.month)
    {
        cout << "the date  is invalid" << nl;
    }*/
    if((obj.day >= 1 && obj.day <= 31) && (obj.month  == 1 || obj.month == 3 || obj.month == 5 || obj.month == 7 ||
                obj.month == 8 || obj.month == 10 || obj.month == 12))
    {
        cout << "the date  is valid" << nl;
    }
    else if((obj.month == 4 || obj.month == 6 || obj.month == 9 ||  obj.month ==  11)  && (obj.day >= 1 && obj.day <= 30))
    {
        cout << "the  date is valid" << nl;
    }
    else
    {
        cout << "the date  is invalid" << nl;
    }
}
int main()
{
    int d, m, y;
    cin >>  d >> m >> y;
    date obj(d, m, y);
    validate(obj);
}
