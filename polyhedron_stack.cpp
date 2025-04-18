#include <iostream>
#include<stack>
#include <vector>
#include <utility>
#include <array>
#include <algorithm>
#define ll long long
#define nl "\n"
#define sp " "
#define pb push_back
#define mp make_pair
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t, nr = 0;
    cin >> t;

    stack<string> swt;
    for (int i = 0; i < t; i++)
    {
        string polyhedron;
        cin >> polyhedron;
        swt.push(polyhedron);
    }
    while (!swt.empty())
    {
        string polyhedron = swt.top();
        swt.pop();
        if (polyhedron == "Tetrahedron")
        {
            nr += 4;
        }
        else if (polyhedron == "Cube")
        {
            nr += 6;
        }
        else if (polyhedron == "Octahedron")
        {
            nr += 8;
        }
        else if (polyhedron == "Dodecahedron")
        {
            nr += 12;
        }
        else if (polyhedron == "Icosahedron")
        {
            nr += 20;
        }
    }

    cout << nr << nl;
    return 0;
}
