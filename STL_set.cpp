#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    set<int, greater<int>> s2;


    s.insert(4);
    s.insert(8);
    s.insert(12);
    s.insert(4);  
    s.insert(s.begin(),100);  

    s2.insert(9);
    s2.insert(8);

    // Display elements of set `s` in ascending order
    cout << "Set s (ascending): ";
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << "\n";

    // Display elements of set `s2` in descending order
    cout << "Set s2 (descending): ";
    for (auto x : s2)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
