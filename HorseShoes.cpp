#include <iostream>
#include <iomanip>
#include <set>
using namespace std;
int main()
{
    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        int nr;
        cin >> nr;
        st.insert(nr);
    }
    int req = 4 - st.size();
    cout << req;
}