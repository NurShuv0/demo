#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int a1 = min(m, a);
        int b1 = min(m, b);

        int c1 = min((2 * m - (a1 + b1)), c);

        cout << a1 + b1 + c1 << endl;
    }
    return 0;
}
