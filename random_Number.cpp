#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define ll long long
#define INF 1e9 + 7
using namespace std;
int main()
{
    speed;
    srand(time(0));
    double nr = (rand() % 9000)/ 100.0;
    cout << fixed << setprecision(6) << nr << sp ; 
    double sw = (rand() % 180000) / 1000.00;
    cout << fixed << setprecision(6) << sw <<nl;
}