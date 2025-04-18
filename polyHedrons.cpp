#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    int t, nr = 0;
    cin >> t;
    vector<string>swt(t);
    for(int i = 0; i < t; i++)
    {
        cin >> swt[i];
    }
    for(int i = 0; i < t; i++)
    {
        if(swt[i] == "Tetrahedron")
        {
            nr += 4;
        }
        else if(swt[i] == "Cube")
        {
            nr += 6;
        }
        else if(swt[i] == "Octahedron")
        {
            nr +=8;
        }
        else if(swt[i] == "Dodecahedron")
        {
            nr += 12;
        }
        else if(swt[i] == "Icosahedron")
        {
            nr += 20;
        }
    }
    cout << nr << "\n";
}