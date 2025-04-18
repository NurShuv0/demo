#include <iostream>
using namespace std;
int main()
{
    int row, col, swt = 0;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            else if (i % 2 == 0)
            {
                if (j == 0 && swt % 2 != 0)
                {
                    cout << "#";
                }
                else if (j + 1 == col && swt % 2 == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            
        }
        if (i % 2 == 0)   swt++;
        cout << "\n";
    }
    return 0;
}