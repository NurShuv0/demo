#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<numeric>
#include<vector>
#define ll long long
#define pb push_back
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int matrix[5][5];
    int row, col;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> matrix[i-1][j-1];
            if(matrix[i-1][j-1] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    int swt = abs(row - 3) + abs(col - 3);
    cout << swt << nl;

}